// Write a C++ program to create a class for student to get and print details of a student. 
// Following are the details of a student:  Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark  
// Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student  

#include<iostream>
using namespace std;

class Student{

    public:
    int Student_id;
    string name , branch;
    int sub1_marks , sub2_marks, sub3_marks, sub4_marks, sub5_marks; 

    void getData(){
        cout<<"Student ID : ";
        cin >> Student_id;

        cout<<"Student Name : ";
        cin >> name;

        cout<<"Student Branch : ";
        cin >> branch;

        cout<<"Student sub 1 marks: ";
        cin >> sub1_marks;

         cout<<"Student sub 2 marks: ";
        cin >> sub2_marks;

         cout<<"Student sub 3 marks: ";
        cin >> sub3_marks;

         cout<<"Student sub 4 marks: ";
        cin >> sub4_marks;

         cout<<"Student sub 5 marks: ";
        cin >> sub5_marks;
    }

    void cal_per(){
        
    }

    
};
int main() {



    return 0;
}