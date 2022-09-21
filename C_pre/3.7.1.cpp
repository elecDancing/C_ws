/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-07 12:11:31
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-07 12:44:52
 */

/* 1英尺 = 12英寸 */

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char  *argv[])
{
    /* code */
    const int TEMP = 12;
    int height = 0;
    int foot = 0;
    int inchs = 0;
    float pounds = 0;
    float BMI = 0;

    cout << "Please enter your height in inchs :";
    cin >> height;
    cout << endl;
    cout << "Your heiht is " << height / TEMP << " foot and " << height % TEMP<< " inchs height"<<endl;
    /* 3,7,2 */
    cout << "please enter your height foot";
    cin >> foot;
    cout << endl;
    cout << "Please enter you height inchs";
    cin >> inchs;
    cout << "Please enter your weight in pounds";
    cin >> pounds;
    cout << "your BMI =" << (pounds / 2.2) / pow((foot * 12 + inchs) * 0.0254, 2);
    return 0;
}
