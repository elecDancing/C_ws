/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-15 23:17:09
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-15 23:22:03
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    int year = 1;
    int DophneMoney=100;
    double CleoMoney=100;
    do
    {
        year++;
        DophneMoney += 10;
        CleoMoney = CleoMoney + CleoMoney * 0.05;
    } while (CleoMoney < DophneMoney);
    cout << year<<endl;
    cout << DophneMoney;
    cout << " " << CleoMoney << endl;
    return 0;
}
