/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-14 19:01:55
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-14 20:27:30
 */
#include<iostream>
#include<string>
int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Enter a word" << endl;
    string word;
    cin >> word;
    string wordOut = word; // Connot display cout << wordOut without assigning a value;
    /* string wordOut ;  Connot display cout << wordOut*/
    int i = word.size() - 1;
    int j = 0;
    cout << "method0 :";
    char temp;
    for (i, j; i >= 0; i--, j++)
    {
        cout << word[i];/* method0 */
        wordOut[j] = word[i];/* merhod1 */
    }
    cout << endl;
    
    cout << "method2 :";
    for (j = 0; j < word.size(); j++)
    {
        cout << wordOut[j];
    }
    cout << endl;

     for (i=word.size()-1, j=0;j < i ; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
     cout << "method3 :" << word << endl;
     cout << "method1 :" << wordOut << endl;
    return 0;
}
