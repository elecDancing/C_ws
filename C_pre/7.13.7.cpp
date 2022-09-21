/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-22 23:17:24
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-22 23:35:27
 */
// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

// function prototypes
double *fill_array(double *begin, double *end);
void show_array(double *begin, double *end);
void revalue(double r, double *begin, double *end);

int main()
{
    using namespace std;
    double properties[Max];

    double *adress = fill_array(properties, properties +Max);
    show_array(properties, adress);
    if (adress -properties > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, adress);
        show_array(properties, adress);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

double* fill_array(double *begin, double *end)
{
    using namespace std;
    double temp;
    double *i;
    int j = 1;
    for (i = begin; i != end; i++,j++)
    {
        cout << "Enter value #" << j<< ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        *i = temp;
    }
    return i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(double *begin, double *end)
{
    using namespace std;
    double *i = begin;
    int j = 1;
    for (i = begin; i != end; i++, j++)
    {
        cout << "Property #" << j<< ": $";
        cout << *i << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double *begin, double *end)
{
    double *p = begin;
    for (p = begin; p != end; p++)
        *p *= r;
}
