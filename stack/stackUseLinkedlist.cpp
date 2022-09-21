/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-01 19:48:06
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-01 21:20:37
 */

// !如果将push和pop操作在链表尾部进行，复杂度为n,所以一般选择在链表头部进行
// !链表头部push和pop的复杂度为 1；
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};
struct Node *top = NULL;
//! when top is NULL my stock is empty;


void Push(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

void Pop(){
    Node *temp;
    if(top == NULL)
        return;
    temp = top;
    top = top->next;
    delete temp;
}

void Print(){
    Node *temp = new Node;
    temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isEmpty(){
    if(top == NULL)
        return true;
    else
        return false;
}


int main(int argc, char const *argv[])
{
    cout << isEmpty() << endl;
    Push(2);
    Push(4);
    Push(2110);
    cout << isEmpty() << endl;
    Print();
    Pop();
    Print();
    Pop();
    Pop();
    cout << isEmpty() << endl;
    return 0;
}
