/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-15 22:58:56
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-15 23:09:05
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    double num;
    cin >> num;
     double sum = 0;
    while (num != 0)
    {
        sum += num;
        cout << sum << endl;
        cin >> num;
    }
        return 0;
}
