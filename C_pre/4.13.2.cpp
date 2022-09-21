/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-13 10:13:18
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-13 10:18:30
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    const int ArSize = 20;
    string name;
    string dessert;
    cout << "Enter your name : \n";
    getline(cin, name);
    cout << "Enter your favorite dessert: \n";
    getline(cin, dessert);
    cout << name << " " << dessert;
    return 0;
}
