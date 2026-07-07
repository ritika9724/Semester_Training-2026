#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "A Class Constructor" << endl;
    }
    void fun_A(){
        cout << "Function from Class A is here" << endl;
    }
};

class B: virtual public A{
    int b = 10;
    public:
    B(){
        cout << "B Class Constructor" << endl;
    }
    void show(){
        cout << "Value of b from Class B is: " << b << endl;
    }
};

class C: virtual public A{
    int c = 7;
    public:
    C(){
        cout << "C Class Constructor" << endl;
    }
    void display(){
        cout << "Value of c from Class C is: " << c << endl;
    }
    ~C(){
        cout << "C Class Destructor" << endl;
    }
};

class D: public B, public C{
    public:
    D(){
        cout << "D Class Constructor" << endl;
    }
};


int main(){
    D obj1;
    obj1.show();
    obj1.fun_A();
    cout << "End of the program" << endl;

    return 0;
}

// DIamond Problem

//       A
//      / \
//     B   C
//      \ /
//       D