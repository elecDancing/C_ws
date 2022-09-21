/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-15 23:46:14
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-16 08:45:00
 */
#include <iostream>
#include<string>
int main(int argc, char const *argv[])
{
    using namespace std;
    string month[12]={
        "jan",
        "feb",
        "mar",
        "apr",
        "may",
        "jun",
        "jul",
        "aug",
        "sep",
        "oct",
        "nov",
        "dec"
    };
  /*   int num[12];
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        cout << "Enter" << month[i]  ;
        cin >> num[i];
       
    }
    for (int i = 0; i < 12; i++){
        sum += num[i];
    }
cout << sum; */

// 5.9.6
    int num[3][12];
    int sum = 0;
    int sum_[3] = {};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++){
            cout << i+1 << " year." << month[j] <<" :";
            cin >> num[i][j];
            sum_[i] += num[i][j];
        }
    }
    sum = sum_[0] + sum_[1] + sum_[2];
    cout << sum_[0] << endl;
    cout << sum_[1] << endl;
    cout << sum_[2] << endl;
    cout << sum << endl;
    return 0;
}
