/*
 * @Descripttion: 
 * @version: 
 * @Author: xp.Zhang
 * @Date: 2022-08-07 20:00:48
 * @LastEditors: xp.Zhang
 * @LastEditTime: 2022-08-07 20:47:09
 *  智能指针  
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

    auto_ptr<A> pAobj(new A);
    return 0;
}
