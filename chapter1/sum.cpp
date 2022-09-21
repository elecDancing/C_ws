/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-13 14:31:54
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-20 16:57:54
 */
//!recursion to sum the arry

#include <iostream>
using namespace std;
// int sum(int A[], int n);
int sum(int A[], int begin, int end);
int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout << sum(A, 10);
 
     cout << sum(A, 0, 9);

    return 0;
}
// !递归版本 iterate version
/* int sum (int A[],int n){
    if(1>n)
        return 0;
    else
        return sum(A, n - 1) + A[n - 1];
        // !the last number plus the sum of the first n numberss
} */
//!p23 二分递归
int sum (int A[], int begin, int end){
    if (begin == end)
    return A[begin]; //return recursion basic
    else
    {
        int middle = (begin + end) >> 1;// right shift equal to divide by 2
        return sum(A, begin, middle) + sum(A, middle+1, end);
    }
        
}