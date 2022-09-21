/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-13 10:38:13
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-13 11:02:35
 */
#include <iostream>
#include <cstring> /* strcpy strcat */
#include <string> /* 使用string类 */
int main(int argc, char const *argv[])
{
    using namespace std;
    /* string method */
    string firstName;
    string lastName;
    cout << "Enter your first name :" << endl;
    getline(cin, firstName);
    cout << "Enter your last name :" << endl;
    getline(cin, lastName);
    cout << lastName << "," << firstName;
    /* char method */
    char FirstName[20];
    char LastName[20];
    cout << "Enter your first name :" << endl;
    cin.getline(FirstName, 20);
    cout << "Enter your last name :" << endl;
    cin.getline(LastName, 20);
    cout << LastName << "," << FirstName;
    return 0;
}
