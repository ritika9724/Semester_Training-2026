#include<iostream>
using namespace std;

class A{
    public:
    void msg(){
        cout<< "Hello ! I am Ritika "<<endl;
    }
};


class B : public A{              // inheritance 
    int a;
    public:
    void display(){
        cout<<"Msg : ";
    }
};

int main(){
    B obj1;
    obj1.msg();
    return 0;

}