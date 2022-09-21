/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-16 11:09:36
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-17 15:17:34
 */
#include<iostream>
using namespace std;
void quickSort(int a[], int low, int high)
{
	if (high < low)return;
 
	int i = low;
	int j = high;
	int key = a[low];
 
	while (i < j)
	{
		//从右向左找比基准key大的值
		while (a[j] >= key && i < j)
		{
			j--;
		}
		//从左到右找比基准key小的值
		while (a[i] <= key && i < j)
		{
			i++;
		}
		if (i < j)
		{
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	//基准值归位
	a[low] = a[j];
	a[j] = key;
 
	//递归
	quickSort(a, low, j - 1);
	quickSort(a, j + 1, high);
}
 
//主函数
int main()
{
	int array[6] = { -2, 11, -4, 13, -5, -2 };
	cout << "排序前：";
	int len = sizeof(array) / sizeof(array[0]);
	cout << "len=" << len << endl;
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << " ";
	}
    cout << endl;
    quickSort(array, 0, len - 1);

    cout << "排序后：";
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << " ";
	}
    cout << endl;

    return 0;
}