// C++ program to create a class for Employee to get and display following Employee information using constructor:
// Empcode,Emp name, Basicsalary

#include<iostream>
using namespace std;

class Employee{
    int Empcode;
    string Empname;
    int Basicsalary;

    public:
   Employee(int code, string name, int salary){
        Empcode = code;
        Empname = name;
        Basicsalary = salary;
    }

    void display(){
        cout<<" Empcode : "<<Empcode<<endl;
        cout<<" Empname : "<<Empname<<endl;
        cout<<" Basicsalary : "<<Basicsalary<<endl;
    }
};


int main(){
    Employee obj(101, "Ritika", 45000);
    
    obj.display();


}