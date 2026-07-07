// WAP to display addition, subtraction, multiplication and division of two integers on screen.
// Declare Class Calculation
// Write Parameterized constructor for initialize num1 and num2
// Write member function for each operation.

#include<iostream>
using namespace std;

class calculation{

    private:
    int num1;
    int num2;

    public:
    calculation(int a, int b){
        num1 = a;
        num2 = b;
    }

    void add(){
        num1+num2;
        cout<<"Addition is : "<<num1 + num2<<endl;
    }

    void sub(){
        num1-num2;
          cout<<"subtraction is : "<<num1 - num2<<endl;
    }

    void multiply(){
        num1*num2;
          cout<<"Multiplication is : "<<num1 * num2<<endl;
    }

    void divide(){
        num1/num2;
          cout<<"Division is : "<<num1 / num2<<endl;
    }
};

int main(){
    int a,b;
    cin>> a >> b;

    calculation obj(a,b);
    obj.add();
    obj.sub();
    obj.multiply();
    obj.divide();

    return 0;

}