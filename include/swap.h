/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-05-28 20:56:50
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-05-28 21:03:58
 */
#pragma once
#include <iostream>

class swap
{
    public:
        swap(int a, int b){
            this->_a = a;
            this->_b = b;
        }
        void run();
        void printInfo();
    private:
        int _a;
        int _b;
};