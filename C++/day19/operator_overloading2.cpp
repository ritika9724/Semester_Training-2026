#include<iostream>
using namespace std;

class A{
    
    int num1;
    public:
    A(int a){
        this->num1 = a;
    }

    int operator +(A &ob){
    //     // A temp(this->num1+ob.num1);
    //     // return temp;

        return this->num1+ob.num1;
    //     // cout<<this->num1+ob.num1;
    }

        int operator -(A &ob){
            return this->num1-ob.num1;
        }

        int operator *(A &ob){
            return this->num1*ob.num1;
        }
};

int main(){
    A obj1(12);
    A obj2(10);
    cout<<obj1+obj2<<endl;    // obj1.+(obj2) => A::+(obj1,obj2)
    cout<<obj1-obj2<<endl;
    cout<<obj1*obj2;
    return 0;
}