/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-13 15:52:51
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-13 17:58:26
 */
#include <iostream>
using namespace std;
long long power2BF_I(int n);
inline long long sqr(long long a);
long long power2(int n);
int main(int argc, char const *argv[])
{
    cout << power2BF_I(4)<<endl;
    cout << power2(4)<<endl;
    return 0;
}
/* 使用简单的移位做2^n */
long long power2BF_I(int n ){
    long long pow = 1;
    while(0<n--){
        pow <<= 1;//!left shift equal mutiply 2
    }
    return pow;
}
/* 使用p20的递归进行2^n */
inline long long sqr (long long a)
{
    return a * a;
}
long long power2(int n){
    if(0==n)
        return 1;
    else
        return (n & 1) ? sqr(power2(n >> 1)) << 1 : sqr(power2(n >> 1));
}