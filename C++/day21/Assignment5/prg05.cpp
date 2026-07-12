// 5. Write program to overload == operator to compare two object of student class

// Class student
// {
// Int
// mark;
// Public:
// Student (int tmark)
// {
// mark=tmark;
// }
// }
// ;
// Int main() {
// Student s1(100),student s2(200),student s3(100);
// If(s1==s2)
// Cout<<” no same marks”
// If(s1==s3)
// Cout<< “same marks”

#include <iostream>
using namespace std;

class Student
{
    int mark;

public:
    Student(int tmark)
    {
        mark = tmark;
    }

    bool operator==(Student s)
    {
        return mark == s.mark;
    }
};

int main()
{
    Student s1(100), s2(200), s3(100);

    if (s1 == s2)
        cout << "Same Marks\n";
    else
        cout << "Not Same Marks\n";

    if (s1 == s3)
        cout << "Same Marks";
    else
        cout << "Not Same Marks";

    return 0;
}