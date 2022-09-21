/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-26 20:49:09
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-26 21:34:38
 */
//!两数相加

//!inserting a node at ending
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    // Node(int x) :data(x), next(NULL) {};
      /*   Node* temp = new Node; //a pointer to linked list
    temp->data = x;//此时我们暂时创造了一个独立的节点并且存入了值；还未将其连接起来
    temp->next = NULL; */
};
//头插法创建单链表
void Insert(int l,Node *head){
    int n;
	for (int i = 0; i < l; i++) {
		Node* temp = new Node; //a pointer to linked list
       temp->next = NULL; 
		cout << "请输入当前结点的值" << endl;
		cin >> n;
		temp->data = n;//给结点赋值
		temp->next = head->next;
		head->next = temp;
	}
}
/* void Insert(int x){
    Node* temp = new Node; //a pointer to linked list
    temp->data = x;//此时我们暂时创造了一个独立的节点并且存入了值；还未将其连接起来
    temp->next = NULL;
    if (head !=NULL)
        temp->next = head;//插入节点中的地址为之前head中的地址，即插入前链表第一个元素的地址
    head = temp; //将头指针指向该插入节点，现在插入的节点是第一个节点
} */
void Print(Node* head){
   	Node *p = head->next;
	while (p) {
		cout << p->data<<"  ";
		p= p->next;
	}
	cout << endl;
}
int main(int argc, char const *argv[])
{

    int l1, l2;
	Node* head1, *head2;//两个头指针指向两条不同的链表
	head1 = new Node; head2 = new Node;
	head1->next = NULL;
	head2->next = NULL;
	cout << "链表1的长度" << endl;
	cin >> l1;
	cout << "输入链表1的值" << endl;
	Insert(l1,head1);
	cout << "链表2的长度" << endl;
	cin >> l2;
	cout << "输入链表2的值" << endl;
    Insert( l2,head2);
	Print(head1);
	Print(head2);
	return 0;
        return 0;
}
