#include<iostream>
using namespace std;



class A{

    public:

    A(){
        cout<<"This is a pera constructor"<<endl;
    }

    A(int a){
        cout<<"This is a two(int int ) pera. constructor"<<endl;
    }

    A(int a, float b){
        cout<<"This is a two(int float ) pera. constructor"<<endl;
    }

    A(float a, int b){
        cout<<"This is a two(float int ) pera. constructor"<<endl;
    }
    
};
int main() {
   A obj;
   A obj2(10);  // A::A(int)
   A obj3(10, 20.7f);
   A obj4(20.7f, 10); 

    return 0;
}