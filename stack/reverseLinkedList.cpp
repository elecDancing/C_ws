/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-01 22:12:58
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-02 20:58:32
 */
#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node *next;
};

struct Node* head;//global variable
void Insert(int x){
    Node* temp = new Node; //a pointer to linked list
    temp->data = x;//此时我们暂时创造了一个独立的节点并且存入了值；还未将其连接起来
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

//!使用栈翻转链表
void Reverse(){
    if(head == NULL)
        return;


    stack<Node *> S;//定义栈  栈中储存的是链表节点址


    Node *temp = head;

    //按照原来顺序存入
    while(temp != NULL){
        S.push(temp);//!栈中存放的是地址
        temp = temp->next;
    }

    //翻转开始
    temp = S.top();//
    head = temp;//栈顶地址为新的头结点地址
    S.pop();
    while(!S.empty()){
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }

    //!不要忘记设置链表尾为空
    temp->next = NULL;
}

int main(int argc, char const *argv[])
{
    head = NULL; // empty list
    Insert(1);
    Insert(4);
    Insert(2);
    Insert(3);
    Print();
    Reverse();
    Print();
    return 0;
}
