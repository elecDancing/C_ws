/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-19 18:13:57
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-19 18:50:35
 */
#include <iostream>
 using namespace std;
int main(int argc, char const *argv[])
{
    void showmenu();
    const int strsize = 20;
    struct bop
    {
        string fullname;
        string bopname;
        int preference;
    };
    bop cc[3];
    cc[0] = {"wiskey soul", "orange", 0};
    cc[1] = {"dfsahjk", "dfahk", 1};
    cc[2] = {"wiskey bitter", "banana", 0};
    showmenu();

    char ch;
    cin.get(ch);
    while (1)
    {
        if (ch == 'a'){
            for (int i = 0; i < 3;i++)
                cout << cc[i].fullname << endl;
            break;
        }
        else if (ch == 'b'){
            for (int i = 0; i < 3;i++)
                cout << cc[i].bopname << endl;
            break;
        }
        else if (ch == 'c'){
              for (int i = 0; i < 3;i++){
                if (cc[i].preference == 0)
                cout << cc[i].fullname<< endl;
                else
                cout << cc[i].bopname << endl;
              }
            break;
        }
        else if (ch == 'q'){
            break;
        }
        else{
            cout << "error,please enter right option" << endl;
            cin.get();
            cin.get(ch);
            continue;
        }
    };
    return 0;
}
void showmenu(){
    cout << "a.diaplay by name  b.display by bop name\n";
    cout << "c.display by prefercence   q.quit";
}
