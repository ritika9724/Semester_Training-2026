// Write a program as per following details
// Create one base class PERSON with following data members Name, College name
// Create one sub class STUDENT derived from PERSON with following data members
// Student_id , Marks of five subject, percentage Member function: showResult( )-
// Calculate total,percentage and finding class(Dist,First,second,pass)
// Create one sub class EMPLOYEE derived from PERSON with following data members Emp_id, qualification , basic salary
// Member function to calculate Net salary and print Net salary
// DA=189% of Basic salary HRA=10% of Basic salary TA=500
// Income tax=5 % of basic salary, if basic salary >50000     Income tax=0, if Basic salary <=50000
// Netsalary=(basicsalary+da+hra+ta) - income tax
// Write appropriate setter function in each class and display detail of student and employee in main.


#include<iostream>
using namespace std;

class person{
    public:

    string name;
    string college_name;

    void setPerson(string n, string c){
        name = n;
        college_name = c;
    }

    void displayPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"College Name : "<<college_name<<endl;
    }
};

class student : public person{
    public:

    int student_id;
    int marks [5];
    float percentage;

    void setStudent(int id){
        student_id = id;
        cout<<"Enter 5 marks :";
         for(int i = 0; i < 5; i++){
        cin >> marks[i];
    }
    }

    void calculatePercentage() {
        int total = 0;

        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }

        percentage = total / 5.0;

        cout << "Total : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        if(percentage >= 75)
        cout << "Class : Distinction";
        else if(percentage >= 60)
        cout << "Class : First";
        else if(percentage >= 50)
        cout << "Class : Second";
        else
        cout << "Class : Pass";
    }
};

class Employee : public person{
    public:

    int emp_id;
    string qualification;
    float basic_salary;

    void setEmployee(int e_id, string q, float salary){
        emp_id = e_id;
        qualification = q;
        basic_salary = salary;
    }

    void displayEmployee(){
        
    cout << "Employee ID : " << emp_id << endl;
    cout << "Qualification : " << qualification << endl;
    cout << "Basic Salary : " << basic_salary << endl;
}

    void calculateNetSalary() {
    float da;
    float hra;
    float ta;
    float income_tax;
    float net_salary;

    da = basic_salary * 189 / 100;
    hra = basic_salary * 10 / 100;
    ta = 500;

    if(basic_salary > 50000)
        income_tax = basic_salary * 5 / 100;
    else
        income_tax = 0;

    net_salary = (basic_salary + da + hra + ta) - income_tax;
    cout << "Net Salary : " << net_salary << endl;
}
};

int main(){
    student s;
    Employee e;

    s.setPerson("Ritika", "RBPU");
    s.setStudent(101);

    cout<<"\nStudent Details\n";
    s.displayPerson();
    s.calculatePercentage();

    cout<<endl;

    e.setEmployee(585, "B.tech",60000);
    cout<<"\nEmployee Details\n";
    e.displayEmployee();
    e.calculateNetSalary();
}