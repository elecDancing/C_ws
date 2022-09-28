/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-25 09:44:39
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-27 19:50:13
 */
#include<iostream>
#include<queue>
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

//遍历分为广度遍历和深度遍历
//其中广度遍历分为前序中序后序 preorder inorder postorder
//oreorder <root><left><right>
//inorder <left><root><right>
//postorder <left><right><root>
//使用队列来进行广度遍历

void LevelOrder(BstNode* root){
    if(root == NULL) return;
    queue<BstNode*> Q;
    Q.push(root);
    while(!Q.empty()){
        BstNode *current = Q.front();
        cout << current->data << " ";
        //先把current的孩子留下来
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        //抛弃current
        Q.pop();
    }
}

//prorder
//算法的空间复杂度与树的高度有关O(h)
void Preorder(BstNode* root){
    if(root == NULL) return; //递归基
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

//Inorder
void Inorder(BstNode* root){
    if(root == NULL) return; //递归基
    Preorder(root->left);
    cout << root->data << " ";
    Preorder(root->right);
}

//Postorder
void Postorder(BstNode* root){
    if(root == NULL) return; //递归基
    Preorder(root->left);
    Preorder(root->right);
    cout << root->data << " ";

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
