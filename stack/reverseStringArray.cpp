/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-09-01 21:31:20
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-09-01 22:39:03
 */
#include <iostream>
#include <stack>
#include <cstring>  
using namespace std;
//!使用栈翻转字符串
//时间空间均为n
void Reverse(char C[], int n){
    stack<char> S;
    for (int i = 0; i < n; ++i){
        S.push(C[i]);
    }
    for (int i = 0; i < n; ++i){
        C[i] = S.top();
        S.pop();
    }
}
//!更简单的方法是前后指针法翻转字符数组
//这种方法不需要额外空间 空间复杂度为1
void Reverse2(char *C, int n){
    char temp;
    for (int i = 0, j = n - 1; i <= j; ++i, --j)
    {
        temp = C[j];
        C[j] = C[i];
        C[i] = temp;
        
    }
}
int main(int argc, char const *argv[])
{
    char C[51];
    cout << "Enter the string :";

    cin.getline(C,51);// todo 字符数组输入
    
    Reverse(C, strlen(C));
    cout << C << endl; // todo 字符数组输出

    Reverse2(C, strlen(C));
    cout << C << endl; // todo 字符数组输出
    return 0;
}
