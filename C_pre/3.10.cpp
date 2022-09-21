/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-09 20:38:57
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-09 20:46:46
 */
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    /* code */
    float a = 50.25;
    float b = 11.17;
    double A = 50.25;
    double B = 11.17;

    cout << a + b << endl;//四舍五入
    cout << A + B << endl;
    cout.setf(ios_base ::fixed, ios_base::floatfield);
    cout << a + b << endl;
    cout << A + B << endl;
    return 0;
}
