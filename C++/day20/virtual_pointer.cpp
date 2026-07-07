#include <iostream>
using namespace std;

class A{
    public:
    int a;
    virtual void pay(){
    }
};

int main(){
    A obj;

    cout << "Size: " << sizeof(obj);

    return 0;
}