/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-19 13:28:31
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-19 13:49:21
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Please enter one of the following choices :\n"
            "c) carnivore   p) pianist\n"
            "t) tree        g) game\n"
         << endl;
    char ch;
    cin.get(ch);
    while (1)
    {
        if (ch == 'c'){
            cout << 1 << endl;
            break;
        }
        else if (ch == 'p'){
            cout << 2 << endl;
            break;
        }
        else if (ch == 't'){
            cout << 3 << endl;
            break;
        }
        else if (ch == 'g'){
            cout << 4 << endl;
            break;
        }
        else{
            cout << "error" << endl;
            cin.get();
            cin.get(ch);
            continue;
        }
    }

    return 0;
}
