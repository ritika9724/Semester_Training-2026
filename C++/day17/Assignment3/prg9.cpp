// A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'.
// Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value
// of 'j'. Make an object of the subclass and use it to assign a value to 'i' and to 'j'. Now call the
// function 'printNum' by this object.

#include<iostream>
using namespace std;

class  A{

    int i;
    public:
    A(int x){
        i = x;
    }

    void printNum(){
        cout<<i;
    }
};

    class  B : public A{

    int j;
    public:
    B(int x, int y) : A(x){
        j=y;
    }
    void printNum(){
        cout<<j;
    } 
};

int main(){
    B obj(20,30);
    obj.printNum();
}