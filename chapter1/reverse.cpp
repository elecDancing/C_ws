/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-13 15:05:37
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-20 16:57:59
 */

#include<iostream>
using namespace std;
void reverse(int *A, int begin, int end);
int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(A, 0, 7);
    for (int i = 0; i < 8;++i){
        cout << A[i] << " ";
    }
        return 0;
}
//!递归版本
void reverse(int *A, int begin, int end){
    if(begin < end)
    {
        swap(A[begin], A[end]);
        reverse(A, begin + 1, end - 1);
    }
}
//!迭代版本1
/* 
next:
if (begin < end){
    swap(A[begin], A[end]);
    begin ++;
    end --;
    goto next;
} 
*/
//!迭代版本2
/*
while(begin < end)
    swap(A[begin++],A[end--]);
 */