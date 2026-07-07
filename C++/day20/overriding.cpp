                            // overriding
#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "fun A";
    }
};
class B : public A
{
public:
    void fun()
    {
        cout << "fun B";
    }
};
int main()
{
    B obj; // stack
    // obj.fun(); // fun B
    B *ptr = new B();    //static binding->overriding//static and dynamic binding both are occured
    // A *ptr=new B();         //fun A
    ptr->fun();
    return 0;
}


