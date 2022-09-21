/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-22 12:02:03
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-22 16:32:06
 */
#include <iostream>
using namespace std;
double harmonic_mean(double a, double b);
int main(int argc, char const *argv[])
{
    double a = 0;
    double b = 0;
    while ((cin >> a >> b) && (a != 0 && b != 0)) {
        cout << harmonic_mean(a, b) << endl;
    }
        return 0;
}
double harmonic_mean (double a, double b){
    return 2.0 * a * b / (a + b);
}
