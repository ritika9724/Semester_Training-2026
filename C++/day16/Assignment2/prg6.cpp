//Write a C++ program to demonstrate ATM money withdrawal process by taking following private data members:    
// Accountno, balance;    
//The withdrawal function should return remaining balance to the user and should deduct withdrawal amount from balance. 
// If withdrawal amount > balance print appropriate message on screen (Not enough balance)    
//The Deposit function should return updated balance to user.  


#include<iostream>
using namespace std;

class ATM{

    private:
    int accountNo;
    float balance;

    public:
    void setData(int acc, float bal){
        accountNo = acc;
        balance = bal;
    }

    void deposit(float amount){
        balance = balance + amount;
        cout << "Updated Balance: " << balance << endl;
    }

    void withDraw(float amount){
        if(amount>balance){
            cout << "Not enough balance";
        }
        else{
            balance = balance - amount;
            cout << "Remaining balance : " << balance;
        }

    }
};


int main() {

    ATM a;

    int accountNo;
    float balance , deposit, withdraw;
    
    cout << "Enter accountNo :";
    cin >> accountNo;

    cout << "Enter balance : ";
    cin >> balance;

    cout << "Enter deposit money : ";
    cin >> deposit;

    cout << "Enter withdraw amount : ";
    cin >> withdraw;


    a.setData(accountNo, balance);
    a.deposit(deposit);
    a.withDraw(withdraw);

    return 0;
}