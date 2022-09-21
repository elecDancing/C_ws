/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-13 20:51:30
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-13 21:16:13
 */
#include <iostream>
using namespace std;
long long fib(int n);
long long fibI(int n);
int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10;i++){
        cout << fib(i) << " ";
    }
    cout << endl;
    for (int i = 1; i < 10; i++)
    {
        cout << fibI(i) << " ";
    }
        return 0;
}
long long fib(int n)
{
    return (2 > n) ? (long long)n : fib(n - 1) + fib(n - 2);
}
//!迭代版本
long long fibI(int n)
{
    long long f = 1, g = 0;
    while(0<n--){
        g = g + f;
        f = g - f;
    }
     return g;
}