// C++ Program to calculate Volume of Cube using parameterized constructor.


#include<iostream>
using namespace std;


class cube{
    private:
    int side;

    public:
    cube(int s){
        side = s;
    }

    void display(){
        int V = side*side*side;
        cout<<"Volume of cube is : "<< V;
    }

};

int main() {

    int s;
    cout<<"Enter the side : ";
    cin>>s;
    cube obj(s);
    obj.display();
    return 0;
}