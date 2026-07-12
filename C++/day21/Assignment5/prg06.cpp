// 6. C++ program to add two objects using binary plus (+) operator overloading

#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number(int n = 0)
    {
        num = n;
    }

    Number operator+(Number n)
    {
        Number temp;

        temp.num = num + n.num;

        return temp;
    }

    void display()
    {
        cout << "Sum = " << num;
    }
};

int main()
{
    Number n1(15), n2(25), n3;

    n3 = n1 + n2;

    n3.display();

    return 0;
}