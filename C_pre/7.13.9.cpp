/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-23 12:11:50
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-23 13:00:17
 */
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n){
    int i = 0;
    for ( i = 0; i < n;i++){
        cout << "Enter the name of No." << i + 1 << ":" << endl;
        cin.getline(pa[i].fullname,SLEN);
        cout << "Enter the hobby of No." << i + 1 << ":" << endl;
        cin.getline(pa[i].hobby, SLEN);
        cout << "Enter the ooplevel of No." << i + 1 << ":" << endl;
        cin >> pa[i].ooplevel;
        cin.get();
        if (!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
            continue;
            cout << "Bad input. process terminated.";
            break;
        }
    }
    return i;
}
void display1 (student st)
{
    cout << st.fullname << " ";
    cout << st.hobby << " ";
    cout << st.ooplevel << endl;
}
void display2 (const student *ps){
    cout << ps->fullname << " ";
    cout << ps->hobby << " ";
    cout << ps->ooplevel << endl;
}
void display3 (const student pa[], int n){
    for (int i = 0; i < n;i++){
        cout << pa[i].fullname << " ";
        cout << pa[i].hobby << " ";
        cout << pa[i].ooplevel << endl;
    }
}
int main(int argc, char const *argv[])
{
    cout << "Enter the size :";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
    continue;
    student *ptr_stu = new student[class_size];
    int num = getinfo(ptr_stu, class_size);
    for (int i = 0; i < num;i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, num);

    delete[] ptr_stu;
    return 0;
}
