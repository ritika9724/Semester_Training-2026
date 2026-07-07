// Write a program as per following details
// Create one base class HOTEL with following data members
// Hotel_name, Hotel_type i.e(Three star,five star) City Hotel_rate i.e(2000,3000,5000)
// Create one base class FLIGHT with following data members
// Flight_no Source city Destination city Seat no
// Create one sub class PASSENGER derived from HOTEL and FLIGHT with following data members Name, Age, city
// Write appropriate member functions in each class and display all information in main


#include<iostream>
using namespace std;

class Hotel{

    public:
    string Hotel_name;
    string Hotel_type;
    string city;
    int Hotel_rate; 


    void setHotel(string h_name, string h_type,string c,int h_rate){
        Hotel_name = h_name;
        Hotel_type = h_type;
        city = c;
        Hotel_rate = h_rate;
    }

    void displayHotel(){
        cout<<"Hotel_name : "<<Hotel_name<<endl;
        cout<<"Hotel_type : "<<Hotel_type<<endl;
        cout<<"City : "<<city<<endl;
        cout<<"Hotel_rate: "<<Hotel_rate<<endl;

    }
};

class Flight{
    public:
    string Flight_no;
    string Source_city;
    string Destination_city;
    string Seat_no;

    void setFlight(string f_no, string s_city, string d_city, string s_no ){
        Flight_no = f_no;
        Source_city = s_city;
        Destination_city = d_city;
        Seat_no = s_no;
    }

    void displayFlight(){
        cout<<"Flight_no :"<<Flight_no<<endl;
        cout<<"Source_city :"<<Source_city<<endl;
        cout<<"Destination_city :"<<Destination_city<<endl;
        cout<<"Seat_no :"<<Seat_no<<endl;
    }
};

class Passenger : public Hotel, public Flight{
    public:
    string name;
    int age;
    string passanger_city;

    void setPassenger(string n, int a, string C){
        name = n;
        age = a;
        passanger_city = C;
    }

    void display(){
        displayHotel();
        cout<<endl;
        displayFlight();
        cout<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"City : "<<passanger_city<<endl;
    }
};

int main(){
   
    Passenger obj;
        
    obj.setPassenger("Ritika", 22, "Amritsar");
    obj.setHotel("Taj Palace", "5 Star", "New Delhi",10000);
    obj.setFlight("AI302","Delhi", "Mumbai", "12A");
    obj.display();
    return 0;
    
}
