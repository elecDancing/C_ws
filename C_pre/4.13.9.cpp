/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-14 00:26:21
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-14 00:37:16
 */
#include <iostream>
int main(int argc, char const *argv[])
{ 
    using namespace std;
    struct CandyBar{
        string band;
        double kg;
        int calorie;
    };
    /* 4.13.6 的动态分配数组版本 */
    CandyBar *pancake = new CandyBar[3];

    pancake[0] = {"cake1", 23, 23};
    pancake[1] = {"cake3", 23, 23};
    pancake[2] = {"cake2", 23, 23};

    cout << pancake[0].band << endl;
    cout << pancake[0].kg << endl;
    cout << pancake[0].calorie << endl;
    delete[] pancake;
    return 0;
}