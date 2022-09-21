/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-07 15:35:40
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-14 20:04:49
 */
//!寻找最大子数组
#include<iostream>
using namespace std;

//! 暴力求解方法n^3
int findMaxSubArr1(int a[], int n)
{
    int s, k, max = INT32_MIN;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j){
            s = 0;
            for (k = i; k <= j; ++k)
                s += a[k];
                if(s>max){
                    max = s;
                }
        }
    }
    return max;
}

//!优化累加n^2
int findMaxSubArr2(int a[], int n){
    int s, k, max = INT32_MIN;
    for (int i = 0; i < n; ++i)
    {
        s = 0;
        for (int j = i; j < n; ++j)
        {
            s += a[j];
            if (s > max)
            {
                max = s;
            }
        }
    }
    return max;
}






int main(int argc, char const *argv[])
{
    int a[] = {-2, 11, -4, 13, -5, -2};
    int n = 6;
    cout << findMaxSubArr1(a, n) << endl;
    cout << findMaxSubArr2(a, n) << endl;
    
    return 0;
}
