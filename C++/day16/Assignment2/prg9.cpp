// Do above program for 5 number of Employees.( Using Array of Object )  // 

#include<iostream>
using namespace std;

class Employee{
public:
    int empcode;
    float basic_salary;

    void setEmployee(int code, float salary){
        empcode = code;
        basic_salary = salary;
    }

    void displayEmployee(){
        cout << "Employee Code : " << empcode << endl;
        cout << "Basic Salary : " << basic_salary << endl;
        cout<<endl;
    }

    void calculateNetSalary(){

        float da, hra, ta, income_tax, net_salary;

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
    }
};

int main(){

    Employee emp[5];

    int code;
    float salary;

    // Input
    for(int i = 0; i < 5; i++){

        cout << "\nEnter Details of Employee " << i+1 << endl;

        cout << "Enter Employee Code : ";
        cin >> code;

        cout << "Enter Basic Salary : ";
        cin >> salary;

        emp[i].setEmployee(code, salary);
    }

    // Output
    cout << "\n***Employee Details ***\n";

    for(int i = 0; i < 5; i++){

        cout << "\nEmployee " << i+1 << endl;

        emp[i].displayEmployee();
        emp[i].calculateNetSalary();
    }

    return 0;
}