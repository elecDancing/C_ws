/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-07 12:11:31
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-07 21:10:51
 */

/* 1 degree = 60 minutes =3600 seconds*/

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char  *argv[])
{
    /* code */
    int degrees = 0;
    int minutes = 0;
    int seconds = 0;
    float all_Degrees = 0;
    cout << "Enter a latitude in degrees, miutes, and seconds"<<endl;
    cout << "degrees:";
    cin >> degrees;
    cout << "minutes:";
    cin >> minutes;
    cout << "seconds:";
    cin >> seconds;
    all_Degrees = degrees + minutes / 60.0 + seconds / 3600.0;
    cout << "all_degrees :" << all_Degrees << endl;
    return 0;
}
