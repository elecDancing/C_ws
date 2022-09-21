/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-19 23:53:05
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-20 00:02:30
 */
#include <iostream>
using namespace std;
#include <fstream>
int main(int argc, char const *argv[])
{
    ifstream File;
    string fileName;
    getline(cin, fileName);
    File.open(fileName);
    if (!File.is_open()) {
            cout << "error" << endl;
        }
        char read_char;
        int counter = 0;
        while(!File.eof()){
            File >> read_char;
            counter++;
        }
        cout << counter << endl;
        File.close();
        return 0;
}

