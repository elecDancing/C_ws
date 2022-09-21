/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-22 17:31:15
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-22 18:22:25
 */
#include <iostream>
using namespace std;
long double probability(int numbers, int picks);
int main(int argc, char const *argv[])
{
    int numbers = 0;
    int picks = 0;
    cout << "please enter the number and pick" << endl;
    cin >> numbers >> picks;
    cout << probability(numbers, picks)*(1.0/27);

    return 0;
}
long double  probability (int numbers ,int picks){
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0;n--,p--){
        result *= n / p;
    }
    return result;
}