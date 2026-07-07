#include<iostream>
using namespace std;

template <class T1, class T2>
class A{
    T1 num1;
    T2 num2;

    public:
    A (T1 a , T2 b){
        num1 = a;
        num2 = b;

    }

    void show(){
        cout<<num1 + num2<<endl;
    }
};

int main(){
    A <int,float> obj(10,10);
    obj.show();
    A <float,int>obj1(11.6,2.2);
    obj1.show();
    A <float , float>obj2(1.1,1.1);
    obj2.show();
}