#include<iostream>
using namespace std;

// name id salary department
class Employee{

    public:

    string name;
    int id;
    int salary;
    string department;

    Employee(string n, int i, int s, string d){

        name = n;
        id = i;
        salary = s;
        department = d;
    }

    void showData(){
        cout<<name<<" "<< id<<" "<<salary<<" "<<department<<" "<<endl;
    }
};

int main() {

    Employee e1("Riya", 585, 15000, "CSE");
    e1.showData();
    return 0;
}


