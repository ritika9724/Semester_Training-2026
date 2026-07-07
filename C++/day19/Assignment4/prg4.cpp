// Write a program as per following details
// Create one base class MEDICINE with following data members
// Category- (i.e. stimulants, inhalants, cannabinoids) Date_of_manufacture, Company name
// Create one sub class TABLET derived from MEDICINE with following data members Tablet name, Price
// Create one sub class PainReliever derived from TABLET with data member Dosage_units: i.e( 1 or 2 or 3)
// Side_effects : i.e (Nausea, Drowsiness, Dizziness.) Use_within_days: i.e(10 or 20 or 30).
// Use appropriate member function for setting and Getting above details and display details in main function.


#include<iostream>
using namespace std;

class Medicine{
    protected:   
    string stimulants;
    string inhalants;
    string cannabinoids;
    int date_of_manufacture;
    string company_name;

    public:
    void SetMedicine(string s, string i, string c, int d, string cn){
        stimulants = s;
        inhalants = i;
        cannabinoids = c;
        date_of_manufacture = d;
        company_name = cn;
    }

    void displayMedicine(){
        cout<<"Stimulates : "<<stimulants<<endl;
        cout<<"Inhalants : "<<inhalants<<endl;
        cout<<"Cannabinoids : "<<cannabinoids<<endl;
        cout<<"Date of Manufacture : "<<date_of_manufacture<<endl;
        cout<<"Company Name : "<<company_name<<endl;
    }
};

class Tablet : public Medicine{
protected:
    string Tablet_name;
    int price;
public:
    void setTablet(string t, int p){
        Tablet_name = t;
        price = p;
    }

    void displayTablet(){
        cout<<"Tablet_name : "<<Tablet_name<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

class PainReliever : public Tablet{
    private:
    int Dosage_units;
    string Side_effects;
    int Use_within_days;
public:
    void setPainReliever(int d, string s, int u){
        Dosage_units = d;
        Side_effects = s;
        Use_within_days = u;
    }

    void display(){
        displayMedicine();
        displayTablet();
        cout<<"Dosage_units : "<<Dosage_units<<endl;
        cout<<"Side_effects : "<<Side_effects<<endl;
        cout<<"Use_within_days :"<<Use_within_days<<endl;
    }
};

int main(){
    PainReliever obj;
    obj.SetMedicine("Yes", "No", "No",2305585,"Sun Pharma");
    obj.setTablet("Paracetamol",50);
    obj.setPainReliever(2,"Drowsiness",20);

    obj.display();
    return 0;
}

