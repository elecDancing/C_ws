/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-22 16:41:57
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-22 17:04:06
 */
#include <iostream>
using namespace std;
int set_mark(double goal[]);
void show_mark(double goal[], int size);
double average(double goal[], int size);
int main(int argc, char const *argv[])
{
    double goal[10] = {};
    int size = set_mark(goal);
    show_mark(goal, size);
    double aver = average(goal, size);
    cout <<"average =" <<  aver;
    return 0;
}
int set_mark(double goal[])
{
    int size;
    std::cout << "Enter the size :" << endl;
    cin >> size;
    for (int i = 0; i < size; i++){
        cout << "Enter No." << i + 1 << ":";
        cin >> goal[i];
    }
    return size; /* return the number of goal */
}
void show_mark(double goal[], int size){
    for (int i = 0; i < size; i++)
        cout << goal[i] << endl;
}
double average(double goal[] , int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += goal[i];
    }
    return sum / size;
}