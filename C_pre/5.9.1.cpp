/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-15 21:58:29
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-15 22:08:20
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter two integer：" << endl;
    int a, b;
    cin >> a;
    cin >> b;
   /*  int i = a;
    int sum = a;
     while (i<b){
        a++;
        sum += a;
        i++;
    }  */
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
        cout << sum;
    return 0;
}
