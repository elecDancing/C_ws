/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-26 20:49:09
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-26 21:29:49
 */
//!两数相加

//!inserting a node at ending
#include<iostream>
using namespace std;
struct Node {//创建进程控制块
	int data;
	struct Node *next;//指向下一个结点的指针
	Node(int x) :data(x), next(NULL) {};
};
//头插法创建单链表
void head_creat(Node *head,int l)
{
	int n;
	for (int i = 0; i < l; i++) {
		Node *p = new Node(0);
		cout << "请输入当前结点的值" << endl;
		cin >> n;
		p->data = n;//给结点赋值
		p->next = head->next;
		head->next = p;
	}
}
void show(Node *head) {
	Node *p = head->next;
	while (p) {
		cout << p->data<<"  ";
		p= p->next;
	}
	cout << endl;
}
int main() {
	int l1, l2;
	Node* head1, *head2;//两个头指针指向两条不同的链表
	head1 = new Node(0); head2 = new Node(0);
	head1->next = NULL;
	head2->next = NULL;
	cout << "链表1的长度" << endl;
	cin >> l1;
	cout << "输入链表1的值" << endl;
	head_creat(head1, l1);
	cout << "链表2的长度" << endl;
	cin >> l2;
	cout << "输入链表2的值" << endl;
	head_creat(head2, l2);
	show(head1);
	show(head2);
	return 0;
}