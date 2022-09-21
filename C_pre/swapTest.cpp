/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-05-29 11:24:19
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-05-29 12:55:02
 */
#include "swap.h"

int main(int argc, char  *argv[])
{
    /* code */
    swap myswap(10, 20);
    myswap.printInfo();
    myswap.run();
    myswap.printInfo();
    return 0;
}
