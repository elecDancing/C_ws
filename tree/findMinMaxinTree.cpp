/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-26 18:58:19
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-26 19:43:23
 */
#include<iostream>
using namespace std;
struct BstNode{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode* GetNewNode(int data){
    BstNode *newNode = new BstNode();//结构体初始化需要括号
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//插入函数
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
//!循环版本
/* int FindMin(BstNode *root){
    if(root == NULL){
        cout << "Error： Tree is empty!" << endl;
        return -1;
    }
    while(root->left != NULL){  //一直递归到最左边叶子
        root = root->left;
    }
    return root->data;
} */

//!递归版本
int FindMin(BstNode *root){
    if(root == NULL){//如果是空树
        cout << "Error： Tree is empty!" << endl;
        return -1;
    }
    else if(root->left == NULL){//如果到达了左叶子节点 返回数据
        return root->data;
    }
    return FindMin(root->left);
}

int FindMax(BstNode *root){
    if(root == NULL){
        cout << "Error： Tree is empty!" << endl;
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }
    return root->data;
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

    cout << FindMin(root)<< endl;
    cout << FindMax(root) << endl;
}
