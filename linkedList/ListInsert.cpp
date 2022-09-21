/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-20 16:55:13
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-21 19:57:09
 */
//! insert a node at n place position
//! the whole linked list is in the heap expect the head pointer;
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
void nPlaceInsert(int data, int n){//Insert a node in "n" place
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL; //初始化要输入的节点
    if(n==1){//如果要在链表头插入节点
        temp->next = head;//插入节点指向原链表第一个节点
        head = temp;//链表头指向插入节点
        return;//函数结束
    }
    //遍历查找到第n-1个节点所在位置
    Node *temp2 = new Node;
    temp2 = head;//初始化一个指针用于寻找第n-1个位置
    for (int i = 0; i < n - 2; ++i)
    {
        temp2 = temp2->next;//
    }
    
    temp->next = temp2->next;
    temp2->next = temp;
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
    while(1){
        int place;
        int insertNumber;
        cout << "Enter a place that you want to insert a node:" << endl;
        cin >> place;
        cout << "Enter the number that you want to insert:" << endl;
        cin >> insertNumber;
        nPlaceInsert(insertNumber, place);//在链表第n个位置插入一个节点
        Print();
    }
    return 0;
}
