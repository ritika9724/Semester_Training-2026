// #include<iostream>
// using namespace std;

// we can't directly access the private data members outside the class
// we can access using friend function
// one class access the private data members to other class using the friend function

// class A{
//     int marks = 10;
//     friend void showMarks(A &ob);
// };

// void showMarks(A &ob){
//     cout<<ob.marks;
// }
// int main(){
//     A obj;
//     showMarks(obj);
//     return 0;
// }


#include <iostream>
using namespace std;

class A{
    int marks = 10;
    friend class B;
};

class B{
    public:
    void showMarks (A &ob){
        cout<<ob.marks;
    }
};

int main(){
    A obj;
    B obj1;
    obj1.showMarks(obj);
}






