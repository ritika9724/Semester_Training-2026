#include <iostream>
using namespace std;

class A{
    int marks = 100;
};

void showMarks(A &obj){
    // cout << obj.marks; // member "A::marks" (declared at line 5) is inaccessible
}

int main(){
    A obj1;
    showMarks(obj1);


    return 0;
}