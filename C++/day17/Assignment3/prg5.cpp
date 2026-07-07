// Write a C++ program to demonstrate ATM money withdrawal and deposit process by taking
// following private data members: Accountno, balance;
// Account no and balance data member initialize using parameterized constructor
// Write three function 1. Deposit 2. Withdraw 3. Balance
// Write menu driven choice
// 1. Deposit
// 2. Withdraw
// 3. Balance
// 4. Exit
// Program stop execution when user enter choice

#include<iostream>
using namespace std;

class ATM{
    private:

    int accountNo;
    float balance;

    public:
    ATM(int AccNo, float bal ){
        accountNo = AccNo;
        balance = bal;
      }

    void deposit(float amount){
        balance = balance + amount;
        cout << "Updated Balance: " << balance << endl;
    }

    void withdraw(float amount){
        if(amount<=balance){
            balance = balance - amount;
            cout << "Remaining balance : " << balance;
    }
    else{
           cout<< "Not enough balance"<<endl;
        }
    }

    void showBalance()
{
    cout << "Current Balance : " << balance << endl;
}

};

int main(){

    float amount;
    int withdraw;
    int AccNo;
    float bal;
    cin>>AccNo>>bal;
    ATM obj(AccNo, bal);
    obj.deposit(amount);
    obj.withdraw(withdraw);
    obj.showBalance();

    return 0;
}