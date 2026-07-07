//abstraction
#include<iostream>
using namespace std;
//incomplete class->abstract class
class Loan{
    // private:  //or protected also 
    // int a,b,c;   //hiding ->data hiding
    public:
    //  void verifyDoc(); //there is no definition of function->incomplete method
 virtual void verifyDoc()=0;
    //make this function as pure virtual function
};
class Homeloan:public Loan{
public:
void verifyDoc(){
    cout<<"verify documents!!";
    }
};

int main(){
Homeloan h1;
h1.verifyDoc();
    return 0;
}