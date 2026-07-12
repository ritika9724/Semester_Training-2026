// 1. Write a program to overload unary minus operator

// Ex. Input : obj(10,-20,30) Output : -10,20,-30 (-obj)

#include <iostream>
using namespace std;

class Number
{
    int a, b, c;

public:
    Number(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }

    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    Number obj(10, -20, 30);

    -obj;

    obj.display();

    return 0;
}