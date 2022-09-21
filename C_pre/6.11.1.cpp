/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-18 23:20:34
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-18 23:56:16
 */
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    while ((ch = cin.get()) != '@'){
        if (!isdigit(ch)){ 
            if((ch>='a')&&(ch<='z'))
                 cout << char(toupper(ch));
            else if(isupper(ch))
                cout << char(tolower(ch));
            else
                cout << char(ch);
        }
        
    }
        return 0;
}
