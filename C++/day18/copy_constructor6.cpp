// COPY CONSTRUCTOR

#include <iostream>
using namespace std;

class A{
    public:
    int a;
    int b;

    A(){}

    A(int a, int b){
        this->a = a;
        this->b = b;
    }

    void show(){
        cout << a << " " << b << endl;
    }

    A(A &obj){
        this->a = obj.a;
        this->b = obj.b;
    }
};


int main(){
    A obj1(10,20);
    A obj2(obj1);
    
    obj2.show();

    return 0;
}