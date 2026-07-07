// Create a class “Mobile” with attributes: brand, price, color, width, height. Use constructor to set
// default values of these attributes. Write function to display details of all attributes


#include<iostream>
using namespace std;

class Mobile{
    private:
    string brand, color;
    int price;
    float width, height;

    public:
    Mobile() {
        brand = "Samsung";
        price = 25000;
        color = "Black";
        width = 7.5;
        height = 16.2;
    }
    void display(){
        cout<<"brand : "<<brand<<endl;
        cout<<"price : "<<price<<endl;
        cout<<"color : "<<color<<endl;
        cout<<"width : "<<width<<endl;
        cout<<"height : "<<height<<endl;
    }
};

int main() {

    Mobile obj;
    obj.display();

    return 0;
}