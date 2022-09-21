/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-14 20:02:55
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-14 21:22:41
 */
#include <iostream>
using namespace std;


string replaceSpace(string s)
{
    
    int i = 0, j = 0;
    int count = 0;
    //!不能使用while(s[i] != '\0')//好像想在string中不以这个为结尾
    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i] == ' ')
        count++;
    }
    string result(s.size() + count * 2,'0');
    //! string 使用下标必须初始化否则会出现段错误
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
             result[j] = '%';
             result[++j] = '2';
             result[++j] = '0';
             ++j;  
        }
        else
            result[j++] = s[i];
    }
    return result;
    }


    // string replaceSpace(string s) {
    //     string ss;
    //     for(auto i:s){
    //         if(i==' ') ss+="%20";
    //         else ss+=i; 
    //     }
    //     return ss;
    // }

int main(int argc, char const *argv[])
{
    string s = " Wearefamilywewewewewe!";
    string result =  replaceSpace(s);

    
    cout << result;


    return 0;
}
