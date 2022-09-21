/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-07 12:11:31
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-07 21:29:23
 */

/* 1 degree = 60 minutes =3600 seconds*/
/* 1sec = 1/60 min = 1/3600 hours = 1/(3600*24) day */
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char  *argv[])
{
    /* code */
    long long seconds;
    int minutes = 0;
    int hours = 0;
    int days = 0;
    cout << "Enter the number of seconds:";
    cin >> seconds;
    cout << seconds / (3600 * 24) << " days " 
    << seconds % (3600 * 24) / 3600 << " hours " 
    << seconds % (3600 * 24) % 3600 / 60 << " mins " 
    << seconds % (3600 * 24) % 3600 % 60 << "secs";

    return 0;
}
