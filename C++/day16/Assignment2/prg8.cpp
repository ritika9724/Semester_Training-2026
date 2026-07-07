// C++ program to create a class for Employee to get and display following Employee information: 
//Empcode,  Basicsalary  Write Member function to calculate Net salary  
// DA=174% of Basic salary  HRA=10% of Basic salary  TA=500  Income tax=5 % of basic salary
// if baic salary > 50000  Income tax=0 , if Basic salary <= 50000    Netsalary=(basic salary + da + hra + ta) – income tax  

#include<iostream>
using namespace std;

class Employee{
    public:
    int empcode;
    float basic_salary;

    void setEmployee(int e_code, float b_salary){
        empcode = e_code;
        basic_salary = b_salary;
    }

    void calNetSalary(){
        float da;
        float hra;
        float ta;
        float income_tax;
        float net_salary;

        da = basic_salary * 174 / 100;
        hra = basic_salary * 10 / 100;
        ta = 500;

        if(basic_salary > 50000)
            income_tax = basic_salary * 5 / 100;
        else
            income_tax = 0;

        net_salary = (basic_salary + da + hra + ta) - income_tax;
        cout << "DA : " << da << endl;
        cout << "HRA : " << hra << endl;
        cout << "TA : " << ta << endl;
        cout << "Income Tax : " << income_tax << endl;
        cout << "Net Salary : " << net_salary << endl;
        cout << "Net Salary : " << net_salary << endl;
    }

    void displayEmployee(){

        cout << "Employee Code : " << empcode << endl;
        cout << "Basic Salary : " << basic_salary << endl;
    }
};

int main(){

    Employee obj;

    obj.setEmployee(101, 60000);

    obj.displayEmployee();
    obj.calNetSalary();

    return 0;
}
