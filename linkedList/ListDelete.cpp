/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-20 16:55:13
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-26 21:28:07
 */
//! Delete a node at n place position
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
void nPlaceDelete(int n){//Delete a node in "n" place
    //遍历查找到第n-1个节点所在位置
    Node *temp1 = new Node;
    Node *temp2 = new Node;
    temp1 = head;//初始化一个指针用于寻找第n-1个位置
    temp2 = head;//初始化一个指针用于寻找第n个位置
    if (n == 1){
        head = temp1->next;
        free(temp1);//release the space in heap that ocurrpied by the first node
        return;
    }
    for (int i = 0; i < n - 2; ++i)
    {
        temp1 = temp1->next;//找到第n-1个节点
    }
   /*  for (int i = 0; i < n-1 ; ++i)
    {
        temp2 = temp2->next;//
    } */
    temp2 = temp1->next;//找到第n个节点
    temp1->next = temp2->next; //第n-1个节点指向第n+1个节点
    free(temp2);//release the space in heap that ocurrpied by the nth node
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
        cout << "Enter a place that you want to delete :" << endl;
        cin >> place;
        nPlaceDelete(place);//在链表第n个位置删除一个节点
        Print();
    }
    return 0;
}
