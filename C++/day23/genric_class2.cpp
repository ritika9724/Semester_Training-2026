#include<iostream>
using namespace std;

template <class T1>

class A{
    T1 num;
    public:
    A(T1 a){
        num = a;
    }
    void show(){
        cout<<num<<endl;
    }
};


// obj create  class <type> e.g      class <int>obj();
int main(){
    A <int> obj(10);
    obj.show();
    A <float> obj1(11.67);
    obj1.show();

    return 0;
}
