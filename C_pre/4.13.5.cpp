/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-13 11:11:14
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-13 11:51:56
 */
#include <iostream>
int main(int argc, char const *argv[])
{ /*
    using namespace std;
    struct CandyBar{
        string band;
        double kg;
        int calorie;
    };

    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << snack.band << endl;
    cout << snack.kg << endl;
    cout << snack.calorie << endl;
//  4.13.6 
    CandyBar pancake[3]{
        {"cake1", 23, 23},
        {"cale2", 12, 12},
        {"cake3", 12, 12}};
    cout << pancake[0].band << endl;
    cout << pancake[0].kg << endl;
    cout << pancake[0].calorie << endl;
    */
//    4.13.7
    using namespace std;
    struct pizza{
        string name;
        double radius;
        double weight;
    };
    pizza joge;
    cout << "Enter name :" << endl;
    getline(cin, joge.name);
    cout << "Enter radius:" << endl;
    cin >> joge.radius;
    cout << "Enter weight :" << endl;
    cin >> joge.weight;
    cout << joge.name << " " << joge.radius << " " << joge.weight << endl;
    return 0;
}
