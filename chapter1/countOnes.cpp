/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-12 19:55:41
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-12 20:17:36
 * count the number of "1" in a binary （decimal） 
 */



#include<iostream>
using namespace std;
int countOnes(unsigned int n);
int main(int argc, char const *argv[])
{

    cout << countOnes(1025);

    return 0;
}
int countOnes(unsigned int n){
    int ones = 0;
    while(n>0){
        ones += (1 & n); //1与n的最后一位进行与运算 AND operation
        n >>= 1;//n右移一位 right shift；
        // For every right shift, n is reduced by at least half
    }
    return ones;
}