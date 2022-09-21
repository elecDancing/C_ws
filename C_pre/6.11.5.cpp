/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-19 19:29:52
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-19 22:36:51
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double money;
    while ((cin >> money)&& money >=0)
    {
        if (money<=5000)
            cout << "loser!" << endl;
        else if(money>5000 && money <=15000)
            cout << (money - 5000) * 0.1 << endl;
        else if(money >15000 && money <= 35000)
            cout << (10000 * 0.1) + (money - 15000) * 0.15 << endl;
        else
            cout << 1000 + 20000 * 0.15 + (money - 35000) * 0.2 << endl;
    }
    return 0;
}
