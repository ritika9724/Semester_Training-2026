// Create a class named Shape with a function that prints "This is a shape". Create another
// class named Polygon inheriting the Shape class with the same function that prints "Polygon
// is a shape". Create two other classes named Rectangle and Triangle having the same function
// which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make
// another class named Square having the same function which prints "Square is a rectangle".
// Now, try calling the function by the object of each of these classes.

#include<iostream>
using namespace std;

class shape{

    public:
    void display(){
        cout<<"This is a shape"<<endl;
    }
};

class polygon : public shape{

     public:
    void display(){
        cout<<"Polygon is a shape"<<endl;
    }
};

class rectangle : public polygon{

     public:
    void display(){
        cout<<"Rectangle is a polygon"<<endl;
    }
};

class triangle : public polygon{

     public:
    void display(){
        cout<<"Triangle is a polygon"<<endl;
    }
};

class square : public rectangle{

     public:
    void display(){
        cout<<"Square is a rectangle"<<endl;
    }
};

int main(){
    shape s;
    polygon p;
    rectangle r;
    triangle t;
    square sq;

    s.display();
    p.display();
    r.display();
    t.display();
    sq.display();

    return 0;
}