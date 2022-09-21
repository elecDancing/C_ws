/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-22 18:13:39
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-22 18:24:04
 */
#include <iostream>
using namespace std;
int jiecheng(int num);

int main(int argc, char const *argv[])
{
    int num = 0;
    cout << "Enter a num that you what know:(q to quit)" << endl;
    while (cin >> num){
        int factional;
        factional = jiecheng(num);
        cout << "num's factioal is = " << factional << endl;
    }
    return 0;
}
    int jiecheng (int num){
    if(num == 0){
        return 1;
    }
    else
        return num*jiecheng(num-1);
    }
