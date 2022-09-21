/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-17 15:40:06
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-17 16:13:17
 */
#include<iostream>
using namespace std;
//!选择排序On^2  
void selectionSort(int A[], int n){
    for (int i = 0; i < n - 1; ++i)
    {                 // the last element is in the right（对） place;
        int iMin = i; // reload the index of the minmum element;
        for (int j = i + 1; j < n; ++j){
            if(A[j] < A[iMin])
                iMin = j; // update the index of minmum element;
        }
        int temp = A[i]; // swap the ist element and the minmum element;
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

int main(int argc, char const *argv[])
{
    //! 每次在a数组中选择最小的，拷贝到b数组中；
    int a[6] = {-2, 11, -4, 13, -5, -2};
    int n = 6;
    selectionSort(a, n);
    for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    int min = INT32_MAX;

    return 0;
}
