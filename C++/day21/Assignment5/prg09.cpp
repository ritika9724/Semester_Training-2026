// 9. C++ program for unary logical NOT operator overloading

#include <iostream>
using namespace std;

class Number
{
    bool value;

public:
    Number(bool v)
    {
        value = v;
    }

    void operator!()
    {
        value = !value;
    }

    void display()
    {
        cout << value;
    }
};

int main()
{
    Number obj(true);

    !obj;

    obj.display();

    return 0;
}