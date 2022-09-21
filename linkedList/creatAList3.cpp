/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-28 16:25:29
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-29 11:40:14
 */
#include <iostream>
using namespace std;
//!Creat A singly linked list
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {};//结构体构造函数
};

void Insert(ListNode *head,int x){//todo 头插法在链表头部插入x
		ListNode* temp = new ListNode(x); //a pointer to linked list 
        //temp->val = x;temp->next = NULL;
        temp->next = head->next;
        head->next = temp;
	}
    
int get(int index,ListNode *head) {//todo get value in the index place
        if(index > (5-1)||index < 0){//索引不能是负数也不能超过链表长度
            return -1;
        }
        else{
            ListNode* finder = head->next;
            for(int i = 0;i < index;++i){
                finder = finder->next;
            }
            return finder->val;
        }
    }

void PrintList(ListNode *head){//todo 打印链表
    ListNode *finder = head->next;//!注意第一个节点地址
    while(finder != NULL){//!注意判断条件
        cout << finder->val<<" ";
        finder = finder->next;
    }
    cout << endl;
}

void DeleteNodeN(ListNode *head, int n){//todo 删除n位置的节点
    ListNode *finder1 = new ListNode(-1);
    ListNode *finder2 = new ListNode(-1);
    finder1 = head->next;//初始化一个指针用于寻找第n-1个位置//!第一个节点的地址
    finder2 = NULL; //初始化一个指针用于寻找第n个位置
    
    if (n == 1)
    {
        head->next = finder1->next;
        free(finder1);
        return;
    }
    for (int i = 0; i < n - 2; ++i)//find the adress of (n-1) place
    {
        finder1 = finder1->next;
    }
    finder2 = finder1->next;//第n个节点地址
    finder1->next = finder2->next;
    free (finder2);
}

/*    //!method2 leetcode 237
  ListNode *finder1 = new ListNode(-1);
  finder1 = head->next;
  for (int i = 0; i < n - 1; ++i) // find the adress of n place
  {
      finder1 = finder1->next;
  }
  //将n+1位置node的信息复制复制给n位置
  finder1->val = finder1->next->val;
  finder1->next = finder1->next->next;
  free(finder1);
}  */

void InsertAtN(ListNode *head, int n, int x){// todo Insert a node(val x) at n place
    ListNode* newNode = new ListNode(x);
    ListNode *finder = new ListNode(-1);
    finder = head->next;//初始化一个指针用于寻找第n-1个位置//!第一个节点的地址
    if(n==1){
        newNode->next = head->next;
        head->next = newNode;
        return;
    }
    for (int i = 0; i < n - 2; ++i)//find the adress of (n-1) place
    {
        finder = finder->next;
    }
    newNode->next = finder->next;
    finder->next = newNode;
}

int main()
{
    ListNode *head1 = new ListNode(-1); //初始化一个链表头
    Insert(head1, 1);
    Insert(head1, 2);
    Insert(head1, 3);
    Insert(head1, 4);
    Insert(head1, 5);

    PrintList(head1);
    cout << get(7, head1);

    /*  DeleteNodeN(head1, 2);
     PrintList(head1);
     DeleteNodeN(head1, 1);
     PrintList(head1); */

    /* InsertAtN(head1, 1, 6);
    PrintList(head1);
    InsertAtN(head1, 3, 6);
    PrintList(head1);
    InsertAtN(head1, 8, 6);
    PrintList(head1); */

    
    // DeleteNodeN(head1, 2);
    return 0;
}
