/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-14 00:39:57
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-14 00:44:45
 */
#include <iostream>
#include <array>
int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter your grade three times :" << endl;
    array<double, 3> grade = {};
    cin >> grade[0];
    cin >> grade[1];
    cin >> grade[2];
    cout << grade[0] << " " << grade[1] << " " << grade[2] << endl;
    return 0;
}
