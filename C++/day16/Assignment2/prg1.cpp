// WAP to print your name, age and city and pin code on screen (Using Class). 

#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string city;
    int pincode;

    void display () {
        cout << "Name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "city : " << city << endl;
        cout << "pincode : " << pincode << endl;

    }
};

int main() {
     
    student s;

    s.name = "Ritika";
    s.age = 22;
    s.city = "Hoshiarpur";
    s.pincode = 144213;

    s.display();
    return 0;

}