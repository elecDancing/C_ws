/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-17 16:11:57
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-17 20:48:52
 */
#include<iostream>
using namespace std;
//!冒泡排序
 // todo pseudosciece //伪科学
 // todo pseudo code //伪代码
void bubbleSort1(int A[], int n)
{
    for (int j = 0; j < n - 2; ++j){//例如 5 elements 最坏 需要四次交换过程；
        for (int i = 0; i < n - 1; ++i){//i<n overflow
            if(A[i] > A[i+1])
                swap(A[i], A[i + 1]);
        }
    }
}

void bubbleSort2(int A[], int n)
{
    int temp = n;//!外循环的n不能边，内循环的n可以变
    for (int j = 0; j < temp - 2; ++j)
    {                                   //例如 5 elements 最坏 需要四次交换过程；
        for (int i = 0; i < n - 1; ++i){//i<n overflow
            if(A[i] > A[i+1])
                swap(A[i], A[i + 1]);
        }
        n--;//!每次冒泡之后，最大的元素已经确定沉下去了，后面已经排好了
    }
}

void bubbleSort3(int A[], int n)
{
    //外部循环使用bool判断，当在程序中间前方元素sorted 则中断程序
    bool sorted = false;
    while(!sorted)
    {
        sorted = true;//假设前方排序好了 如果没有进入swap语句，说明前方已经sorted
        for (int i = 0; i < n - 1; ++i){//i<n overflow
            if(A[i] > A[i+1])
                swap(A[i], A[i + 1]);
            sorted = false;
        }
        n--;//!每次冒泡之后，最大的元素已经确定沉下去了，后面已经排好了
    }
}
int main(int argc, char const *argv[])
{
    int a[6] = {-2, 11, -4, 13, -5, -2};
    int n =    6;
    bubbleSort3(a, n);
    for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
