// 2. Write a program to overload pre decrement operator (obj1= --obj)

#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number(int n)
    {
        num = n;
    }

    void operator--()
    {
        --num;
    }

    void display()
    {
        cout << num;
    }
};

int main()
{
    Number obj(10);

    --obj;

    obj.display();

    return 0;
}