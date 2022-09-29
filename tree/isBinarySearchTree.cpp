/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-25 09:44:39
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-28 19:07:15
 */
#include<iostream>

using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};
//初始化节点函数
BstNode* GetNewNode(int data){
    BstNode *newNode = new BstNode();//结构体初始化需要括号
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data){
    if(root == NULL)
    { // empty tree;
        root = GetNewNode(data);
        return root;
    }
    //recursion
    else if(data <= root->data){
         root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right, data);
    }
}
//!检验二叉树是否是二叉搜索树
bool IsSubtreeLesser(BstNode* root, int value){
    if(root == NULL) return true;
    if(root->data <= value
        && IsSubtreeLesser(root->left, value)
        && IsSubtreeLesser(root->right, value))
        return true;
    else
        return false;
}

bool IsSubtreeGreater(BstNode* root, int value){
    if(root == NULL) return true;
    if(root->data <= value
        && IsSubtreeGreater(root->left, value)
        && IsSubtreeGreater(root->right, value))
        return true;
    else
        return false;
}
bool IsBinarySearchTree(BstNode* root){
    if (root == NULL)
        return true;
    if(IsSubtreeGreater(root->left, root->data)
        &&IsSubtreeGreater(root->right, root->data)
        &&IsBinarySearchTree(root->left)
        &&IsBinarySearchTree(root->right))
        return true;
    else
        return false;
}

//!与其写这样三个函数
//!我们可以找到左子树的最大值和右子树的最小值和root->data比较
bool IsBinarySearchTree(BstNode* root,int minValue, int maxValue){
    if (root == NULL)
        return true;
    if(root->data > minValue
        && root->data < maxValue
        &&IsBinarySearchTree(root->left,minValue, root->data)
        &&IsBinarySearchTree(root->right, root->data, maxValue))
        return true;
    else
        return false;
}

int main() {
BstNode *root;//to store the adress of root Node
root = NULL;
root = Insert(root, 15);//注意此处写法
root = Insert(root, 10);
root = Insert(root, 20);
root = Insert(root, 25);
root = Insert(root, 8);
root = Insert(root, 12);


    
}
