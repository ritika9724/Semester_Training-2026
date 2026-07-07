#include <iostream>
using namespace std;

class Payment{
    public:
    virtual void pay(){
        cout << "Payment Processing...";
    }
};

class UPI: public Payment{
    public:
    void pay(){
        cout << "UPI Payment Processing...";
    }

};

class CreditCard: public Payment{
    public:
    void pay(){
        cout << "Credit Card Payment Processing...";
    }
};

class NetBanking: public Payment{
    public:
    void pay(){
        cout << "Net Banking Payment Processing...";
    }
};

int main(){
    Payment *ptr = new UPI();

    ptr->pay();

    return 0;
}