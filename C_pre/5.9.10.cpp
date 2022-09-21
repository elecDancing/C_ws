/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-16 14:06:30
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-16 14:43:49
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    int num;
    cout << "Enter the number :";
    cin >> num;
    for (int i = 0; i < num;i++){
        for (int j = num-1; j > i; --j)
        {
            cout << ".";
        }
        for (int j = i+1; j>0; --j){
            cout << "*";
        }
        cout << endl;
    }
        return 0;
}
