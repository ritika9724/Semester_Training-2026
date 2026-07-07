#include <iostream>
using namespace std;

// constructor chaining ( when we create the obj of child class then first it will create the obj of parent class then child class)

class A
{
public:
    A()
    {
        cout << "A class constructor" << endl;
    }
};

class B : public A
{
public:
    B(int a, int b){
          cout << "B class constructor(int,int)" << endl;
    }
    B()
    {
        cout << "B class constructor" << endl;
    }
};

int main()
{
    B obj1(12,10);

    return 0;
}
