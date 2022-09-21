/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-23 11:44:19
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-23 12:08:03
 */
//arrobj.cpp -- functions with array objects
/* #include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
using namespace std;
const char* Sname[4] =
    {"Spring", "Summer", "Fall", "Winter"};

void fill(double arr[], int size);
void show(const double arr[], int size); //only read  not allow write 
int main()
{
    double expenses[4] = {};
    fill(expenses, 4);
    show(expenses,4);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(double arr[], int size)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << *(Sname+i) << " expenses: ";
        std::cin >> arr[i];
    }
}

void show(const double arr[], int size)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout <<*(Sname+i) << ": $" << arr[i] << '\n';
        total += arr[i];
    }
    std::cout << "Total: $" << total << '\n';
}
 */
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
using namespace std;
const char* Sname[4] =
    {"Spring", "Summer", "Fall", "Winter"};
struct b{
    double enpenses[4];
};
void fill(double arr[], int size);
void show(const double arr[], int size);/* only read  not allow write */
int main()
{
    b expense;
    fill(expense.enpenses, 4);
    show(expense.enpenses,4);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(double arr[], int size)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << *(Sname+i) << " expenses: ";
        std::cin >> arr[i];
    }
}

void show(const double arr[], int size)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout <<*(Sname+i) << ": $" << arr[i] << '\n';
        total += arr[i];
    }
    std::cout << "Total: $" << total << '\n';
}
