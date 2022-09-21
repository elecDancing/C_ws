/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-10 19:38:40
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-11 23:30:28
 */
#include <iostream>
#include <cstring>
int main(int argc, char  *argv[])
{
    using namespace std;
    double ted = 0.0;
    double* pt = &ted;
    float treacle[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    float *pd = treacle;
    cout << *pd << " " << *(pd + 9) << endl;
    /* code */
    string firstName = "";
    string lastName = "";
    char grade = 'G';
    int age = 0;
    cout << "What's your first name ? ";
    getline(cin, firstName);
    cout << "What's your last name ? ";
    getline(cin, lastName);
    cout << "What letter grade do you derserve ? ";
    cin >> grade;
    grade += 1;
    cout << "What's your age ? ";
    cin >> age;
    cout << endl;
    /*  */
    cout << "Name:" << lastName << "," << firstName <<endl;
    cout << "Grade:" << grade << endl;
    cout << "age:" << age<<endl;
    
    return 0;
}
