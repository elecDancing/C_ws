/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-18 14:59:22
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-18 19:20:12
 */
//快排最好或者平均复杂度为Onlogn
//最差的复杂度为On^2
//不需要多余空间
//使用枢轴 pivot
//!不稳定
#include <iostream>
using namespace std;


int Partition(int *A, int start, int end){
    int pivot = A[end];//定义枢轴为最后一个element
    int partitionIndex = start;//设置初始分割位置为start
    for (int i = start; i < end; ++i){
        if(A[i] <= pivot){
            swap(A[i], A[partitionIndex]);
            ++partitionIndex;
        }
    }
    swap(A[partitionIndex], A[end]);//更换枢轴的位置
    return partitionIndex;//分割位置
}

void QuickSort(int *A, int start, int end){
    if(start < end){
        int partitionIndex = Partition(A, start, end);
        QuickSort(A, start, partitionIndex - 1);
        QuickSort(A, partitionIndex + 1, end);
    }
}
int main(int argc, char const *argv[])
{
    int a[6] = {-2, 11, -4, 13, -5, -2};
    QuickSort(a, 0, 5);
    for (int i = 0; i < 6; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
