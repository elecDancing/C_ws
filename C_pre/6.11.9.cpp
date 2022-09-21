/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-20 00:20:41
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-23 11:27:47
 */
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream File;
    string filename;
    getline(cin, filename);
    File.open(filename);
    if (!File.is_open()){
        cout << "error" << endl;
    }
    int num = 0;
    File >> num;
    cout << num;
    struct patrons
    {
        string name;
        double donations;
    };
    patrons *op = new patrons[num];
    File.get();
    while (!File.eof())
    {
        for (int i = 0; i < num;i++){
            getline(File, op[i].name);
            File >> op[i].donations;
        File.get();
        }
    }
    cout << "eeee";
    for (int i = 0; i < num; i++)
    {
        cout << op[i].name << "   : " << op[i].donations << endl;
    }
    delete[] op;
    return 0;
}
