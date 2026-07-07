// Write a program as per following details
// Create one base class Teacher
// Data members Name, Department, College name, Email id.
// Create sub classes for Math Teacher, English Teacher, and Science Teacher Data
// member Qualification, Expertise and salary.
// Display following details for each teacher
// Name: Department: College name: Email id: Qualification: Expertise: Salary:


#include<iostream>
using namespace std;

class teacher{
    public:
    string name;
    string department;
    string college_name;
    string Email_id;

    void setValue(string n, string dept, string college, string e_id){
        name = n;
        department = dept;
        college_name = college;
        Email_id = e_id;
    }
};

class Math_Teacher : public teacher{
    public:
    string qualification;
    string expertise;
    int salary;

    void setData(string q, string e, int s){
      qualification = q;
      expertise = e;
      salary = s;  
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"College Name : "<<college_name<<endl;
        cout<<"Email Id : "<<Email_id<<endl;
        cout<<"Qualification : "<<qualification<<endl;
        cout<<"Expertise : "<<expertise<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout << "\n";
    }
};

class English_Teacher: public teacher{
    public:
    string qualification;
    string expertise;
    int salary;

    void setData(string q, string e, int s){
        qualification = q;
        expertise = e;
        salary = s;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"College Name : "<<college_name<<endl;
        cout<<"Email Id : "<<Email_id<<endl;
        cout<<"Qualification : "<<qualification<<endl;
        cout<<"Expertise : "<<expertise<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout << "\n";
    }
};

class Science_Teacher : public teacher{
    public:
    string qualification;
    string expertise;
    int salary;

    void setData(string q, string e, int s){
        qualification = q;
        expertise = e;
        salary = s;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"College Name : "<<college_name<<endl;
        cout<<"Email Id : "<<Email_id<<endl;
        cout<<"Qualification : "<<qualification<<endl;
        cout<<"Expertise : "<<expertise<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main(){
    Math_Teacher obj;
    obj.setValue("Ritka", "CSE", "RBPU", "ritika2004@gmail.com");
    obj.setData("B.tech", "Frontend", 25000);
    obj.display();

    English_Teacher obj1;
    obj1.setValue("Sauram", "CSE", "RBPU", "sauram02@gmail.com");
    obj1.setData("B.tech", "Java", 30000);
    obj1.display();

    Science_Teacher obj2;
     obj2.setValue("Riya", "Science", "DAV college", "ri2004ya@gmail.com");
    obj2.setData("M.SC", "Algebra", 20000);
    obj2.display();

    return 0;

}



