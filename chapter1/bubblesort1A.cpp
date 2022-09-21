/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-12 19:02:15
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-20 16:57:49
 * 冒泡排序
 */
#include<iostream>
using namespace std;
void bubblesort1A(int A[], int n);
int main(int argc, char const *argv[])
{
    int A[] = {5, 7, 0, 8, 1, 3 };
    bubblesort1A(A, 6);
    for (int i = 0; i < 6;i++){
        cout << A[i]<<" ";
    }
        return 0;
}
void bubblesort1A(int A[], int n)
{
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for (int i = 1; i < n;i++){
            if(A[i-1]>A[i])
            {
            swap(A[i - 1], A[i]);
            sorted = false;
            }
        }
        --n;//Each loop is sure that an element is already in place
    }
}
