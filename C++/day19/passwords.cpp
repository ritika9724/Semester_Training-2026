#include <iostream>
#include <string>
using namespace std;

class Password{
    string pass;

    public:
    Password(string pass){
        this->pass = pass;
    }

    bool operator ==(Password &temp){
        if(this->pass == temp.pass){
            return 1;
        }
        return 0;
    }
};

int main(){
    Password saved("123");
    Password current("123");
    // Password current("23");

    if (saved == current){
        cout << "Login Successfull";
    } else {
        cout << "Invalid Pass";
    }
}

