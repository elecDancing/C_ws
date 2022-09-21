/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-13 11:53:07
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-17 10:48:33
 */
#include <iostream>
#include <cstring>
int main(int argc, char const *argv[])
{
    
     using namespace std;
    struct pizza{
        string name;
        double radius;
        double weight;
    };
    /* 使用new分配内存 */
    
    char *ps = new char;
    *ps = 'a';
    cout << *ps << endl;
    cout << &ps << endl;
    delete ps;
    char animal[20] = "fox";
    cout << animal << " "<< &animal << endl;
    cout << animal << " " << (int *)animal << endl;
    // strcpy(); 该函数传入的两个参数均是地址
    char food[20] = "carrots";
    //food[20] = "rabby"; wrong. 应该使用strcpy（） 或者strncpy () ,不能使用复制啊运算符
    /* 相比之下 string类 不用担心数组越界 且可以使用赋值运算符 */

    /* 用new创建动态结构 ，其中joge是地址 不是结构名称,所以运算符句点无法使用*/
    /* （*ps）.name 非要用句点可以这样使用 */
    pizza* joge = new pizza ;
    cout << "name :" << endl;
    getline(cin, (*joge).name);
    cout << (*joge).name << endl;
    cout << "radius :" << endl;
    cin>>(*joge).radius;
    cout << "weight :" << endl;
    cin >> joge->weight;
    
    
    // getline(cin, joge->name);
    // cout << joge->name << endl;

    cout << joge->name << " " << joge->radius << " " << joge->weight << endl;
    
    return 0;
}
