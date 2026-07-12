// 4. Write a program to overload Binary * (multiply) operator for object of different class

// Ex. Class unit_test, class Practical Practical result=object of unit_test+object of practical

#include <iostream>
using namespace std;

class Practical;

class UnitTest
{
    int marks;

public:
    UnitTest(int m = 0)
    {
        marks = m;
    }

    friend Practical operator*(UnitTest, Practical);
};

class Practical
{
    int marks;

public:
    Practical(int m = 0)
    {
        marks = m;
    }

    void display()
    {
        cout << "Total Marks = " << marks;
    }

    friend Practical operator*(UnitTest, Practical);
};

Practical operator*(UnitTest u, Practical p)
{
    Practical temp;

    temp.marks = u.marks * p.marks;

    return temp;
}

int main()
{
    UnitTest u(10);

    Practical p(5), result;

    result = u * p;

    result.display();

    return 0;
}