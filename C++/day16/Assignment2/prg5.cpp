//Write a C++ program to create a class for student to get and print details of a student. 
// Following are the details of a student:  Studied, name ,sem, branch  

#include<iostream>
using namespace std;

class Student {
    public:
    string studid;
    string name;
    string sem;
    string branch;

    void getData(){
        cout << "Enter Student ID: ";
        cin >> studid;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Student Semester: ";
        cin >> sem;

        cout << "Enter Student Branch: ";
        cin >> branch;
    }

    void display(){
        cout << "Student ID : " << studid << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Semester : " << sem << endl;
        cout << "Student branch : " << branch << endl;
    }
};
int main() {

    Student s;

    s.getData();
    s.display();

    return 0;
}