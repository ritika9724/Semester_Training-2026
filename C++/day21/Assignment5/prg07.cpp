// 7. Write a program to overload post increment (++) operator.

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

    void operator++(int)
    {
        num++;
    }

    void display()
    {
        cout << num;
    }
};

int main()
{
    Number obj(20);

    obj++;

    obj.display();

    return 0;
}