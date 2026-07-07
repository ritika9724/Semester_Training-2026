#include<iostream>
using namespace std;


                    // using this pointer 

class Student{

       
    public:
    int rollNo;
    string name;

 
    Student(int rollNo, string name){
       this -> rollNo = rollNo;
       this -> name = name;
    }

    void showData(){
        cout<<rollNo<<" "<<name<<endl;
    }

                                // internally work   

                                
    //  void showData(Student *this){             
    //     cout<<this->rollNo<<" "<<this->name<<endl;
    // }
};

int main(){
    Student s1(100, "riya");
    Student s2(555, "ritika");

    s1.showData();     // student:: showData(s1)
    s2.showData();     // student:: showData(s2)
    return 0;

}