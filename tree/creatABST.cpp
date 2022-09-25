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

bool Search(BstNode* root, int data){
    if(root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (data < root->data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
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
int number;
cout << "Enter number be searched" << endl;
cin >> number;

if(Search(root, number) == true)
    cout << "God Damn ! You find it !" << endl;
else
    cout << "Zombie eat your brain !!!" << endl;
    
}
