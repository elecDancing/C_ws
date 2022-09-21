/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-18 14:26:24
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-18 14:34:45
 */
#include<iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    char ch;
    int ct1, ct2;
    ct1 = 0;
    ct2 = 0;
    while ((ch = cin.get())!='$'){
        cout << ch;
        ct1++;
        if (ch=='$')
            ct2++;
        cout << ch;
    }
    cout << ct1 << " " << ct2 << endl;
    return 0;
}
