/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-09 12:29:04
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-18 11:14:50
 */
#include <iostream>
using namespace std;
//!插入排序 On^2
void insertionSort(int A[], int n){

    for (int i = 1; i<n;i++) 
	{
    	//a[i]是要插入的元素
    	int j = i-1;
        int key = A[i];//A[i]需要记录下来 因为A【j】操作时候会改变数组顺序
        // a[i]与前面（已经排好序了）进行比较，插入其中
        while (j>=0 && A[j] > key) 
		{
            swap(A[j + 1], A[j]);
            j--;
        }
  	}
}
int main(int argc, char const *argv[])
{
    int a[6] = {-2, 11, -4, 13, -5, -2};
    int n = 6;
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
  		cout<<a[i]<<" ";
	}
    return 0;
}
