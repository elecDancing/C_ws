/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-16 12:07:51
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-17 00:05:30
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    struct car {
        string name;
        int year;
    };
    int num;
    cout << "How many cars?:" << endl;
    cin >> num;
    car *CAR = new car[num];
    /* CAR是数组首地址 CAR[i]不是 不能使用箭头运算符 */
    cin.get();/* 清除缓冲区回车 */
    for (int i = 0; i < num; i++)
    {
        
        cout << "Car#" << i + 1 << endl;
        cout << "Enter the name:";
        getline(cin, CAR[i].name);  
        cout << "Enter the year:";
        cin >> CAR[i].year;
        cin.get();/* 清除缓冲区回车 */
    }
    for (int i = 0; i < num;i++){
        cout << CAR[i].name << "\t" << CAR->year << endl;
        cout << CAR->name;
    }
        delete[] CAR;    
    return 0;
}
