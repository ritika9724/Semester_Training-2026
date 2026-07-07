#include <iostream>
using namespace std;

class A{
    int num;
    public:
    A(int a){
        num = a;
    }
};

int main(){
    A obj1(12);
    A obj2(10);

    // obj1 + obj2; // error: no match for ‘operator+’ (operand types are ‘A’ and ‘A’)
    // internally: obj1.+(obj2) => A::+(&obj1, obj2)

    return 0;
}