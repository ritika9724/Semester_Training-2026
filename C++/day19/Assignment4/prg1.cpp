// Write a program that defines a shape class with a constructor that gives value to width
// and height. Then define two sub-classes triangle and rectangle, that calculate the area
// of the shape. In the main, define two objects a triangle and a rectangle and then call
// the area () function.

#include<iostream>
using namespace std;


class shape{
    public:
    int width;
    int height;
    int area;

    shape(int w, int h){
        width = w;
        height = h;
    }
};

class triangle : public shape{

    public:
    triangle(int w, int h) : shape(w,h){
    }
    void display(){
        area =(width*height)/2;
        cout<<"Area of triangle is : "<<area<<endl ;
    }
};

class rectangle : public shape{
    public:
    rectangle(int w, int h) : shape(w,h){
    }
    void display(){
        area= width*height;
        cout<<"Area of rectangle is : "<<area<<endl;
    }
};

int main(){
    triangle obj(20,30);
    rectangle obj1(10,20);

    obj.display();
    obj1.display();
    return 0;
}