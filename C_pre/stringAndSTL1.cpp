/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-07 20:00:48
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-07 20:41:17
 * string的意义：
 * 1.处理char类型数组 并封装标准c中的一些字符串处理的函数，当string进入c++之后，他的
 * 意义就是一个容器。string类有100多个接口函数。    ·  
 */
#include <iostream>
using namespace std;
#include <string>

int main(int argc, char const *argv[])
{
    string one("Lottery Winner");
    cout << one << endl;
    string two(20, 's');
    cout << two << endl;

    string three(one);
    cout << three << endl;
    one += "abc";

    two = "Sorry! That was.";
    three[0] = 'P';

    string four = two + three;
    cout << four << endl;

    char alls[] = "ALL's well that ends well";
    string five(alls, 20);//take the first twenty
    cout << five << "!\n";

    string six(alls + 6, alls + 10); // tempalte<class iter>string(iter begin, iter end)
    cout << six << ",";

    string seven(&five[6], &five[10]);
    cout << seven << "...\n";

    cout << sizeof(seven) << endl;
    cout << sizeof(int) << endl;
    
    return 0;
}
