/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-23 13:00:27
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-23 13:08:11
 */
#include <iostream>
using namespace std;
double add(double x, double y){
    return x + y;
}
double calculate(double a, double b, double (*pt)(double x, double y)){
    return pt(a, b);
};
int main(int argc, char const *argv[])
{
    double p = calculate(2.5, 10.4, add);
    cout << p << endl;

    return 0;
}

