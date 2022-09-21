/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-26 15:17:06
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-26 20:16:50
 */
#include<iostream>
using namespace std;
   struct Node //Doubly linked list node struct
{
    int data;
    Node* next;
    Node* prev;
};
   Node *head;  //Global variable
struct Node* getNode(int x) //get new node and initial it
{
    Node *newnode = new Node; //! allocate space for newnode !!!!! heap 区域
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}


void insertAtHead(int x){//头插法
     Node *newnode = getNode(x);//get the new node
    if (head == NULL){//if newNode is the first node insert
        head = newnode;
        return; //!Don't forget return
    }
    head->prev = newnode; // the former pointer of the first node originly  ponit to newnode;
    newnode->next = head;// the letter pointer of the newnode ponit to the first node originly
    head = newnode;//relode head
}


void insertAtTail(int x){//尾插法
    Node *newnode = getNode(x);//get the new node
    Node *findTail = head;
    if (head == NULL)
    { // if newNode is the first node insert
        head = newnode;
        return; //!Don't forget return
    }
    while(findTail->next != NULL)//遍历到尾部
    {
        findTail = findTail->next;
    }
    findTail->next = newnode;
    newnode->prev = findTail;
}

void insertAtN(int x,int n)//在n位置插入一个节点
{
    Node *newnode = getNode(x);//get the new node
    Node *temp = head;
     if(n==1){//如果要在链表头插入节点
        newnode->next = head;//插入节点指向原链表第一个节点
        head = newnode;//链表头指向插入节点
        return;//函数结束
    }
    for (int i = 0; i < n-2;++i){
       temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
}

void Print(){
    Node *printnode = head; //打印的节点指针指向链表头
    while (printnode != NULL){
        cout << printnode->data << " ";
        printnode = printnode->next;//指向下一个节点
        
    }
    cout << endl;
}

void reversePrint(){
    Node *printnode = head; 
    if (printnode == NULL) //empty list
        return;
    while (printnode->next != NULL)
    {                               // find the last node address//!不使用printnode-> != NULL 因为当printnode到达NULL时无法回传
        printnode = printnode->next;//指向下一个节点
    }
    // use prev to print from back to former
    while(printnode != NULL){
        cout << printnode->data << " ";
         printnode = printnode->prev;
    }
     cout << endl;
}

int main(int argc, char const *argv[])
{
    head = NULL;
    cout << "1" << endl;

    
    /*  insertAtHead(1);
    insertAtHead(2);
    insertAtHead(3);
    insertAtHead(4);
    Print();
    reversePrint(); */


   /*  insertAtTail(1);
    insertAtTail(2);
    insertAtTail(3);
    insertAtTail(4);
    Print();
    reversePrint();  */

    insertAtTail(1);
    insertAtTail(2);
    insertAtTail(3);
    insertAtTail(4);
    insertAtN(5, 1);
    insertAtN(3, 1); 
    insertAtN(150, 7); 
    
    Print();
    return 0;
}
