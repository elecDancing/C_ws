/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-20 16:55:13
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-25 19:32:36
 */
//! Reverse the hole array 
//!Recursion
//! the whole linked list is in the heap expect the head pointer;
//! head is a global variable
/*
 * fist step : fix the links
 * second step : free the space
 */
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
struct Node* head;//global variable
void headInsert(int data){
    Node* temp = new Node; //a pointer to linked list
    temp->data = data;//此时我们暂时创造了一个独立的节点并且存入了值；还未将其连接起来
    temp->next = NULL;
    if (head !=NULL)
        temp->next = head;//插入节点中的地址为之前head中的地址，即插入前链表第一个元素的地址
    head = temp; //将头指针指向该插入节点，现在插入的节点是第一个节点
}
void Print(){
    Node *printnode = head; //打印的节点指针指向链表头
    while (printnode != NULL){
        cout << printnode->data << " ";
        printnode = printnode->next;//指向下一个节点
        
    }
    cout << endl;
}
void Reverse(Node *p){
    if(p ->next == NULL){
        head = p;
        return;
    }
    Reverse(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
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
        headInsert(x);
        Print();
    }//使用头插法创建了一个有n个节点的链表
    Reverse(head);
    Print();
    cout << endl;
    return 0;
}
