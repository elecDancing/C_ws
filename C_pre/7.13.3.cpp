/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-07-22 17:15:21
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-07-22 17:30:36
 */
#include <iostream>
using namespace std;


struct box
{
    string maker;
    float height;
    float width;
    float length;
    float volume;
};
void showBox(box b);
void vol(box *b);
int main()
{
    box ch = {"China", 6, 10, 10, 0};
    vol(&ch);
    showBox(ch);
    return 0;
}
void showBox(box b){
    cout << b.maker << " " << b.volume << endl;
}
void vol(box *b){
    b->volume = b->height * b->length * b->width;
    cout << b->volume << endl;
}