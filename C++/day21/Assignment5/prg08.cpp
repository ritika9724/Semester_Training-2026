// 8. C++ program to add two distances using binary plus (+) operator overloading

#include <iostream>
using namespace std;

class Distance
{
    int meter;

public:
    Distance(int m = 0)
    {
        meter = m;
    }

    Distance operator+(Distance d)
    {
        Distance temp;

        temp.meter = meter + d.meter;

        return temp;
    }

    void display()
    {
        cout << "Distance = " << meter << " meters";
    }
};

int main()
{
    Distance d1(100), d2(250), d3;

    d3 = d1 + d2;

    d3.display();

    return 0;
}