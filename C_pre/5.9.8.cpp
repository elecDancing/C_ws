/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-16 13:16:58
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-16 13:45:46
 */
#include<iostream>
#include<cstring>
int main(int argc, char const *argv[])
{
    using namespace std;
    char word[30];
    int num = 0;
    string x ;
    cout << (x != "car") << endl;
   /*  while (strcmp("done", word) != 0)
    {
        cin >> word;
        num++;
        cin.get();
    } */
    while (x != "car"){
        cin >> x;
        num++;
    }
    cout << num-1;
    return 0;
}
