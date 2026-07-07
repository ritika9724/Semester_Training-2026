#include <iostream>
using namespace std;

int a = 100;

class A{
    int a;
    
    public:
    void fun();
};

int main(){
    int a = 10;
    // cout << a;
    cout << ::a;


    return 0;
}

void A::fun(){
    
}