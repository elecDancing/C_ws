/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-15 22:41:41
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-15 22:53:57
 */
#include<iostream>
#include <array>
#include<stdint.h>
int main(int argc, char const *argv[])
{
    using namespace std;
    const int ArSize = 17;
    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i <ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i <ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
        return 0;
}
