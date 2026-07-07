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
    Payment *ptr = nullptr;

    int ch;

    cout << "1. UPI" << endl;
    cout << "2. Credit Card" << endl;
    cout << "3. Net Banking" << endl;
    cout << "Enter Payment Method: ";

    cin >> ch;

    switch (ch)
    {
    case 1:
        ptr = new UPI();
        break;
    
    case 2:
        ptr = new CreditCard();
        break;
    
    case 3:
        ptr = new NetBanking();
        break;
    
    default:
        cout << "Try Again";
        break;
    }

    ptr->pay();

    return 0;
}