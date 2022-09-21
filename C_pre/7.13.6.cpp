/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-22 22:17:35
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-22 23:12:21
 */
#include <iostream>
using namespace std;
void Reverse_array(double arr[], int size);

void Show_array(double arr[], int size);

int Fill_array(double arr[], int size);

int main(int argc, char const *argv[])
{
    double arr[10] = {};
    const int size = 10;
    int count = Fill_array(arr, size);
    Show_array(arr, count);
    Reverse_array(arr, count);
    return 0;
}
int Fill_array(double arr[], int size)
{
    int i = 0;
    int count = 0;
    while ((cin >> arr[i]) && i < size)
    {
        cout << "No." << i + 1 << "num had entered" << endl;
        count++;
        i++;
    }
    return count;
}
void Show_array(double arr[], int size)
{
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Reverse_array(double arr[], int size)
{
    double temp;
    for (int i = 1, j = size - 2; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    Show_array(arr, size);
}