#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;

    public:
    Student(int r, string n){
        rollNo = r;
        name = n;
    }

    void showData(){
        cout << name << " " << rollNo;
    }
};


int main(){
    Student s1(585, "Ritika");

    s1.showData();

    return 0;
}