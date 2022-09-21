/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-19 11:35:45
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-19 12:54:50
 */
#include<iostream>
#include <array>
#include <cctype>
int main(int argc, char const *argv[])
{
    using namespace std;
    double sum = 0,average = 0,input=0;
    int counter = 0;
    array<double, 10> donation;
    int bigger = 0;
    while ((cin >> input) && counter < 10){
        donation[counter++] = input;
    }
    cout << counter<<endl;
    for (int i = 0; i < counter;i++)
    {
        sum += donation[i];
    }
    average = sum / counter;
    cout << average<<endl;
    for (int i = 0; i < counter;i++){
        if(donation[i] > average)
            bigger++;
    }
    cout << bigger << endl;

    return 0;
}
