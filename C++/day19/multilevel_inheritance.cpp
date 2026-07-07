#include<iostream>
using namespace std;

class A{
    int num1;
    public:
    A(){
        cout<<"A class constructor "<<endl;
    }

    void show(){
        cout<<"num1 : "<<num1<<endl;
    }
};

class B : public A{
    public:
    B(){
    cout<<"B class constructor"<<endl;
    }
};

class C : public B{
    public:
    C(){
        cout<<"C class constructor"<<endl;
    }

                        // distructor
    ~ C(){                                
        cout<<" C class distructor !!";
    }
};

int main(){

    C obj;
    obj.show();
    cout<<"happy learning"<<endl;
}