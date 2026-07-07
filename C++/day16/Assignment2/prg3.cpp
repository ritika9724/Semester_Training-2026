// WAP to display addition, subtraction, multiplication and division of two integers on screen.    
// Declare Class Calculation  
//Declare data member num1 and num2 in Private section    
// Write member function for initialize num1 and num2    
//Write member function for each operation.  

#include<iostream>
using namespace std;

class calculation{

    private:
    int num1;
    int num2;

    public:

    void setValue(int a, int b){
        num1 = a;
        num2 = b;
    }

    void addition(){
        cout << "Addition = " << num1 + num2 << endl;

    }

    void subtraction(){
        cout <<"Subtraction = " <<  num1 - num2 << endl;
    }

    void multiplication(){
        cout << "Multiplication = " << num1 * num2 << endl;
    }

    void division(){
        cout << "Division = " << num1 / num2 << endl; 
    }
};
int main() {

    calculation c;

    int a , b;
    cin >> a >> b;

    c.setValue(a,b);

    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();

    return 0;
}