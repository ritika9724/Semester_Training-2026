#include <iostream>
using namespace std;

// constructor chaining ( when we create the obj of child class then first it will create the obj of parent class then child class)

class A{
int num1;

public:
    A()
    {
        cout << "A class constructor" << endl;
    }
    A(int a){
        cout<<"A class constructor(int)"<<endl;
        num1 = a;
    }
    void show(){
        cout<<"num1 :  "<<num1<<endl;
    }
};

class B : public A
{
public:
    B(int a, int b):A(b){
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
    obj1.show();   
}
