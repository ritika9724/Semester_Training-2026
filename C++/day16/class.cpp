// write a cpp program to create a class for students to get and print details of a student .

// following are the details of the students

// Student_id, Name, Branch, Sub1_mark. Sub2_mark. Sub3_mark. Sub4_mark, Sub5_mark

// Write member function to calculate percentage, class(dist, first, second, pass) of a student



#include<iostream>
using namespace std;

class student{
    int student_id;
    string name;
    string branch;
    int marks[5];
    public:
    void setData(int i, string n, string b){
        student_id=i;
        name=n;
        branch=b;
    }

    public:
    void setMarks(int temp[]){
        for(int i=0;i<5;i++){
            marks[i]=temp[i];
        }
    }

    void printMarks(){
        for(int i=0; i<5; i++){
            cout<<marks[i]<<" ";
        }
    }

    void cal_per() {
        // calculate the percentage
            int sum=0;
            for(int i=0; i<5; i++){
                sum = sum + marks[i];
            }
            float per = sum/5.0;
            cout<< "Total = "<< sum << endl;
            cout<< "Percentage = "<< per << "%" <<endl;
        }
    };
    int main() {
        int arr[] = {10, 20,30,40,50};
        student s1;
        student s2;
        s1.setData(101, "riya", "cse");
        s1.setMarks(arr);
        s1.printMarks();
        s1.cal_per();
        return 0;
    }

