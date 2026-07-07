#include<iostream>
using namespace std;

class A{

    public:
    A(){
        cout<<"A class Constructor"<<endl;
    }
    
    void fun_A(){
        cout<<"Fun from A"<<endl;
    }
};

class B{
    public:
    void fun_B(){    
    cout<<"Fun from B"<<endl;
    }
};

class C : public A , public B{
    public:
};

int main(){

    C obj;
    obj.fun_A();
    obj.fun_B();

    return 0;
}