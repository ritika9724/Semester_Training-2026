#include<iostream>
using namespace std;

class A{
    public:
    void msg(){
        cout<< "Hello! I am Ritika "<<endl;
    }
};

class B{
    int a;
    A obj;   // B having A obj -> Has-A-Relation    access with object
    public:
    void display(){
        cout<<"Msg : ";
        obj.msg();
    }
};

int main(){
    B obj1;
    obj1.display();
    return 0;
}

// Is a relation is called inheritance