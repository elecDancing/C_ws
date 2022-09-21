/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-16 11:49:56
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-18 14:39:23
 */
//!归并排序
//!分治的思想
#include<iostream>
using namespace std;
//!归并排序Onlong（n）
//!空间复杂度O(n)

  
/* 【1】选择排序、快速排序、希尔排序、堆排序不是稳定的排序算法

冒泡排序、插入排序、归并排序和基数排序都是稳定的排序算法。 */


//将左数组和右数组排序并合并
void Merge(int A[], int L[], int leftCount, int R[], int rightCount){
	int i = 0, j = 0, k = 0;//!must be intialzed to 0
	//输入到该函数的L和R已近sorted
	while(i < leftCount && j < rightCount){
		if(L[i] > R[j])
			A[k++] = R[j++];
		else
			A[k++] = L[i++];
	}
	// maybe some elements left;
	while (i < leftCount)
		A[k++] = L[i++];
	while(j < rightCount)
		A[k++] = R[j++];
}
void MergeSort(int A[], int n){
	int mid, i, *L, *R;
	if(n < 2)
		return;//recursion base
	mid = n >> 1;

	L = new int[mid * sizeof(int)];
	R = new int[(n - mid) * sizeof(int)];
	for (i = 0; i < mid; ++i)
		L[i] = A[i];
	for (i = mid; i < n; ++i)
		R[i - mid] = A[i];

	MergeSort(L, mid);
	MergeSort(R, n - mid);
	Merge(A, L, mid, R, n - mid);

	delete[] L;
	delete[] R;
}
	
int main() {
	int A[6] = {-2, 11, -4, 13, -5, -2}; 
	int i,numberOfElements;
	numberOfElements = sizeof(A)/sizeof(A[0]); 

	// Calling merge sort to sort the array. 
	MergeSort(A,numberOfElements);

	//printing all elements in the array once its sorted.
	for(i = 0;i < numberOfElements;i++)
		cout << A[i] << " ";
	return 0;
}
