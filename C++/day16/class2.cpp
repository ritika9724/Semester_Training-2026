#include<iostream>
using namespace std;

class student{
    int rollNo;
    string name;
    char batch;             // non static data = instance data member
   
    public:
    static string clg_name;   // static data = class data member
    void setData(int r, string s, char b){
        rollNo = r;
        name = s;
        batch = b;
    }
    void showData(){
        cout<<rollNo<<" "<<name<<" "<<batch;
    }
};

string student::clg_name="RBPU";

int main() {
    student s1, s2, s3;
    s1.setData(101,"riya",'A');
    s1.showData();
    s2.setData(102,"ritika",'B');
    s2.showData();
    s3.setData(103,"jiya",'C');
    s3.showData();
    return 0;
}