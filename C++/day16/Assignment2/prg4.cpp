// WAP to find area of circle.Area of Circle = PI * r * r  
// Where, PI = 3.14 (Using Class and Object)

#include<iostream>
using namespace std;


class Circle {

    public:

    float r;

    void setRadius(float radius){
        r = radius;
        }

    float getArea(){
        return 3.14 *r * r;
    }
};
int main() {

    Circle c;

    float r;
    cin >> r  ;

    c.setRadius(r);
    cout << c.getArea();

    return 0;
}