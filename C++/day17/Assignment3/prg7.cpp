// Create a class “Mobile” with attributes: brand, price, color. Enter detail of five different mobile. (Using Array of object).
// Display total number of mobile having price greater than 5000.
// Display Brand, Price and color for all mobiles for price range 1000 to 10000

#include<iostream>
using namespace std;

class Mobile{
    private:
    string brand, color;
    int price;

    public:
    void getData(){
        cin>>brand;
        cin>>price;  
        cin>>color;
    }

    void display(){
        cout<<"brand : "<<brand<<endl;
        cout<<"price : "<<price<<endl;
        cout<<"color : "<<color<<endl;
    }

    int getPrice(){
        return price;
    }
};


int main(){
    Mobile obj[5];
    cout << "Enter details of 5 mobiles:\n";


for(int i=0; i<5; i++){
    obj[i].getData();
}
   cout << "\nAll Mobile Details:\n";
for(int i=0; i<5; i++){
    obj[i].display();
}

int count = 0;
for(int i=0; i<5; i++){
    if (obj[i].getPrice()>5000){
        count++;
    }
}
cout << "\nTotal mobiles having price greater than 5000 : " << count << endl;

for(int i = 0; i < 5; i++)
{
    if( obj[i].getPrice()>=1000 && obj[i].getPrice()<=10000 )
    {
        cout << "\nMobiles having price between 1000 and 10000:\n";
        obj[i].display();
    }
}

}