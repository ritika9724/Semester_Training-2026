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

    void copy(A &obj){
        a = obj.a;
        b = obj.b;
    }

    void Add(A &ob2){
        int a = this->a + ob2.a;
        int b = this->b + ob2.b;
        
        cout << "a: " << a << " b: " << b;
    }

};


int main(){
    A obj1(10,20);
    A obj2(obj1);
    
   obj1.Add(obj2);

    return 0;
}