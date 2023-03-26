/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-07 20:00:48
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2023-03-26 22:08:32
 *  智能指针  ： 一种垃圾回收机制 ，基于引用计数的垃圾回收机制，跟踪处理的垃圾回收机制   
 */
#include <iostream>
using namespace std;
#include <string>
#include <memory>

class A
{
    public:
    A()
    {
        cout << "Contruct A object." << endl;
    }
    ~A(){
        cout << "Destroy A object." << endl;
    }
};

int main(int argc, char const *argv[])
{
    auto_ptr<int> pInt(new int(10));
    cout << *pInt << endl;

    auto_ptr<A> pAobj(new A);//实现内存自动回收
    return 0;
}
