// We want to store the information of different vehicles. Create a class named Vehicle with
// two data member named mileage and price. Create its two subclasses

// *Car with data members to store ownership cost, warranty (by years), seating capacity and
// fuel type (diesel or petrol).
// *Bike with data members to store the number of cylinders, number of gears, cooling type(air,
// liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
// Make another two subclasses Audi and Ford of Car, each having a data member to store the
// model type. Next, make two subclasses Bajaj and TVS, each having a data member to store
// the make-type.
// Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership
// cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a
// TVS bike.

#include <iostream>
using namespace std;

class vehicle{
    public:
    int mileage;
    int price;

    void setVehicle(int m, int p){
        mileage = m;
        price = p;
    }

    void displayVehicle(){
        cout<<"Mileage is : "<<mileage<<endl;
        cout<<"price is  : "<<price<<endl; 
    }
};

class car : public vehicle{
    public:
    int ownership_cost;
    int warranty;
    int seating_capacity;
    string  fuel_type;

    void setCar(int o, int w, int s, string  f){
        ownership_cost = o;
        warranty = w;
        seating_capacity = s;
        fuel_type = f;
    }

    void displayCar(){
        cout<< "Ownership_cost : "<<ownership_cost<<endl;
        cout<< "Warranty : "<<warranty<<endl;
        cout<< "Seating_capacity : "<<seating_capacity<<endl;
        cout<< "Fuel_type : "<<fuel_type<<endl;
    }
};

class bike : public vehicle{
    public:
    int number_of_cylinders;
    int number_of_gears;
    string cooling_type;
    string  wheel_type;
    int fuel_tank_size;


    void setBike(int c, int g, string cool, string  wheel, int fuel){
        number_of_cylinders = c;
        number_of_gears = g;
        cooling_type = cool;
        wheel_type = wheel;
        fuel_tank_size = fuel;
    }

    void displayBike(){
        cout<< "Number_of_cylinders : "<<number_of_cylinders<<endl;
        cout<< "Number_of_gears : "<<number_of_gears<<endl;
        cout<< "Cooling_type : "<<cooling_type<<endl;
        cout<< "Wheel_type : "<<wheel_type<<endl;
        cout<< "fuel_tank_size : "<<fuel_tank_size<<endl;
    }
};

class audi : public car{
    public:
    string model_type;

    void setAudi(string m){
        model_type = m;
    }

    void displayAudi(){
        displayVehicle();
        displayCar();
        cout<<"Model_type : "<<model_type<<endl;
    }
};

class ford : public car{
    public:
    string model_type;

    void setFord(string model){
        model_type = model;
    }

    void displayFord(){
        displayVehicle();
        displayCar();
        cout<<"Model_type : "<<model_type<<endl;
    }
};

class bajaj : public bike{
    public:
    string make_type;

    void setBajaj(string make){
        make_type = make;
    }

    void displayBajaj(){
        displayVehicle();
        displayBike();
        cout<<"Make_type : "<<make_type<<endl;
    }
};

class TVS : public bike{
    public:
    string make_type;

    void setTVS(string m_type){
        make_type = m_type;
    }

    void displayTVS(){
        displayVehicle();
        displayBike();
        cout<<"Make_type : "<<make_type<<endl;
    }
};


int main(){
    audi a;
    ford f;
    bajaj b;
    TVS t;

    a.setVehicle(18,5500000);
    a.setCar(400000,5,5,"Petrol");
    a.setAudi("A6");
    a.displayAudi();

    cout<<endl;

    f.setVehicle(20, 1800000);
    f.setCar(300000, 3, 5, "Diesel");
    f.setFord("Mustang");
    f.displayFord(); 

     cout<<endl;

    b.setVehicle(45, 95000);
    b.setBike(1, 5, "Air", "Alloys", 15);
    b.setBajaj("Pulsar");
    b.displayBajaj();

     cout<<endl;

    t.setVehicle(50, 85000);
    t.setBike(1, 4, "Oil", "Spokes", 12);
    t.setTVS("Apache");
    t.displayTVS();
}