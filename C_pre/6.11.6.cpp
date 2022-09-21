/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-19 22:42:08
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-19 23:20:52
 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num=0;
    int count = 0;
    struct op
    {
        string name;
        double donations;
    };
    cout << "How many patrons?" << endl;
    cin >> num;
    op *info = new op[num];
    cin.get();
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the name : ";
        getline(cin, info[i].name);
        cout << "Enter the fund of donations: ";
        cin >> info[i].donations;
        cin.get();
    }
    cout << "Patrons" << endl;
    for (int i = 0; i < num;i++){
        cout << info[i].name << " : " << info[i].donations << endl;
    }
    cout << "Grand Patrons" << endl;
    for (int i = 0; i < num; i++)
    {
        if (info[i].donations > 10000){
        cout << info[i].name << " : " << info[i].donations << endl;
        count++;}
    }
    if(count ==0)
        cout << "NONE" << endl;
    delete [] info;
    return 0;
}
