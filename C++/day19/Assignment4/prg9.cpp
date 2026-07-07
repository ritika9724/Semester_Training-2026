// All the banks operating in India are controlled by RBI. RBI has set a well defined
// guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit
// etc) which all banks must follow. For example, suppose RBI has set minimum interest rate
// applicable to a saving bank account to be 4% annually; however, banks are free to use 4%
// interest rate or to set any rates above it.
// Write a program to implement bank functionality in the above scenario. Note: Create few
// classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI,
// PNB etc). Assume and implement required member variables and functions in each class.

#include<iostream>
using namespace std;

class customer{
    public:
    string customer_name;
    int customer_id;
    string address;

    void setCustomer(string c_name, int c_id, string adres){
        customer_name = c_name;
        customer_id = c_id;
        address = adres;
    }

    void displayCustomer(){
        cout<<"Customer_Name : "<<customer_name<<endl;
        cout<<"Customer_Id : "<<customer_id<<endl;
        cout<<"address : "<<address<<endl;
    }
};

class account{
    public:
    int account_number;
    float balance;

    void setAccount(int acc_no, float bal){
        account_number = acc_no;
        balance = bal;
    }

    void displayAccount(){
        cout<<"Account_Number : "<<account_number<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};

class RBI{
    public:
    float minimum_interest_rate;
    int minimum_balance;
    int maximum_withdrawal_limit;

    void setRBI(float min_interest, int min_bal, int max_limit){
        minimum_interest_rate = min_interest;
        minimum_balance = min_bal;
        maximum_withdrawal_limit = max_limit;
    }

    void displayRBI(){
        cout<<"Minimum_interest_rate : "<<minimum_interest_rate<<endl;
        cout<<"Minimum_balance : "<<minimum_balance<<endl;
        cout<<"Maximum_withdrawal_limit : "<<maximum_withdrawal_limit<<endl;
          cout<<endl;
    }
};

class SBI : public RBI{
    public:
    string branch_name;

    void setSBI(string b_name){
        branch_name = b_name;
    }

    void displaySBI(){
        cout<<"Branch_Name : "<<branch_name<<endl;
    }
};

class ICICI : public RBI{
    public:
    string branch_name;

    void setICICI(string br_name){
        branch_name = br_name;
    }

    void displayICICI(){
        cout<<"Branch_Name : "<<branch_name<<endl;
    }
};

class PNB : public RBI{
    public:
    string branch_name;

    void setPNB(string brnch_name){
        branch_name = brnch_name;
    }

    void displayPNB(){
        cout<<"Branch_Name : "<<branch_name<<endl;
    }
};

int main(){
    SBI s;
    ICICI i;
    PNB p;
    
    s.setRBI(4,1000,50000);
    s.setSBI("Hoshiarpur Branch");

    s.displayRBI();
    s.displaySBI();

    return 0;
}