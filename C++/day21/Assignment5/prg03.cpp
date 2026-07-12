// 3. Write a program to overload Binary *(multiply) operator for object of same class

// Ex. class student s1,s2,s3 s3=s1*s2

#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    Student(int m = 0)
    {
        marks = m;
    }

    Student operator*(Student s)
    {
        Student temp;

        temp.marks = marks * s.marks;

        return temp;
    }

    void display()
    {
        cout << "Result = " << marks;
    }
};

int main()
{
    Student s1(10), s2(20), s3;

    s3 = s1 * s2;

    s3.display();

    return 0;
}