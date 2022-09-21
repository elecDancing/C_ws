/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-05-28 20:56:58
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-05-29 11:33:53
 */
#include "swap.h"

void swap::run()
{
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void swap::printInfo()
{
    std::cout << "_a =" << _a << std::endl;
    std::cout << "_b =" << _b << std::endl;
}