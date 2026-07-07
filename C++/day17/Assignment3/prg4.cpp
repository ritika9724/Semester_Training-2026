// C++ Program To calculate area of Box using parameterized Constructor.

#include<iostream>
using namespace std;

class box{
    private:
    int length, breadth, height;

    public:
    box(int l, int b, int h){
        length = l;
        breadth = b;
        height = h;
    }

    void display(){
        int A = 2*((length * breadth) + (breadth*height) + (height*length));
        cout<<"Area of Box is : "<< A;
    }
};



int main(){

    int l,b,h;
    cout<<"Enter the value : ";
    cin>> l >> b >> h;
    box obj(l,b,h);
    obj.display();
    return 0;
}