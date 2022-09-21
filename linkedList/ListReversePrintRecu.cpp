/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-20 16:55:13
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-26 11:17:43
 */
//!inserting a node at ending
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
struct Node* head;//global variable
void Insert(int x){
    Node* temp = new Node; //a pointer to linked list
    temp->data = x;//此时我们暂时创造了一个独立的节点并且存入了值；还未将其连接起来
    temp->next = NULL;
    if (head == NULL)
    head = temp; //将头指针指向该插入节点，现在插入的节点是第一个节点
    else{
         Node *x = new Node;//设置一个值保存头地址，准备遍历到原链表的尾部
         x = head;
         while (x->next != NULL)
         {
             x = x->next; //遍历都原链表的尾部
         }
         x->next = temp;//原始链表尾部指针从NULL调整到新插入的节点上
    }
}
void Print(){//普通打印
    Node *printnode = head; //打印的节点指针指向链表头
    while (printnode != NULL){
        cout << printnode->data << " ";
        printnode = printnode->next;//指向下一个节点
        
    }
    cout << endl;
}
void Print2(Node *p){//迭代打印
    if (p == NULL)
        return; //迭代终点；
    cout << p->data << " ";
    Print2(p->next);
}
void Print3(Node *p){//反向迭代打印
    if (p == NULL)
        return; //迭代终点；
    Print3(p->next);
    cout << p->data << " ";
}
int main(int argc, char const *argv[])
{
    int n = 0; // node
    head = NULL; // empty list
    cout << "How many numbers?:" << endl;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number No." << i << endl;
        cin >> x;
        Insert(x);\
    }
    Print();
    Print2(head);
    cout << endl;
    Print3(head);
    cout << endl;
    return 0;
}
