/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-25 09:44:39
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-25 11:42:14
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

//!root的高度取决于左子树高度和右子树高度中大的那个，再加上本身的高度1
int FindHeight(BstNode* root){
    if(root == NULL){    return -1;}//如果到达叶子节点，其左右子树的高度均为0
    //如果返回0，由于递归的原因，叶子节点的高度变为1
    //但是叶子节点的高度为0；
    int leftHeight = FindHeight(root->left);
    int rightHeight = FindHeight(root->right);

    return max(leftHeight, rightHeight) + 1;

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
