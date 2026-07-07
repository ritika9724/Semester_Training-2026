#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;
    A() {}

    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void show(){
        cout<<a<<" "<<b<<endl;
    }

    void copy( A &ob){ 
       a=ob.a;
       b=ob.b;
    }

    // void copy( A &ob){    //(A*this, A &ob)   hidden this pointer
    //    this-> a=ob.a;
    //    this-> b=ob.b;
    // }
};

int main()
{
    A obj1(34, 56);    

    // A obj2 = obj1;

    // A::Add(&obj1, obj2);     // same as obj1.Add(obj2)
    A obj2(obj1);  
    obj2.show();
    // obj2.copy(obj1);    // A::cpoy(obj2,obj1)
    return 0;
}