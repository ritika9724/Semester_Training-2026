// Write a program with a mother class animal. Inside it define a name and an age
// variables, and set_value () function. Then create two sub class Zebra and Dolphin
// which write a message telling the age and name of animal, also giving some extra
// information for both sub class (e.g. place of origin).place of origin of zebra is Earth
// and place of origin of dolphin is water.

#include<iostream>
using namespace std;

class animal{
    public:
    string name;
    int age;

    void setValue(string n, int a){
        name = n;
        age = a;
    }
};

class Zebra : public animal{
    public:
    
        void display(){
           cout<<"Name : "<<name<<" "<<endl;
           cout<<"Age : "<<age<<" "<<endl;
           cout<<"place_of_origin : Earth " <<endl;
        } 
};

class Dolphin : public animal{
    public:

    void display(){
          cout<<"Name : "<<name<<" "<<endl;
           cout<<"Age : "<<age<<" "<<endl;
           cout<<"place_of_origin : Water " <<endl;
    }
};

int main(){
    Zebra obj1;
    obj1.setValue("Zebra", 5);
    obj1.display();

    Dolphin obj2;
    obj2.setValue("Dolphin", 8);
    obj2.display();
}