#include<iostream>
using namespace std;

class A{
    public:
    int a;

    protected:
    int b;

    private:
    int c;
};

class B: public A{     // by defult private 
    public:
    void fun(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    B obj;
    cout<<obj.a<<endl;
    obj.fun();
    return 0;
}