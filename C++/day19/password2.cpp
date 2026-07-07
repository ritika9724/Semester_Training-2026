#include <iostream>
#include <conio.h>
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

    string pass = "";

    cout << "Enter Password: ";

    for (int i = 0; i <= 2; i++){
        char ch = getch();
        pass = pass + ch;
        cout << "*";
    }

    Password current(pass);

    if (saved == current){
        cout << "\nLogin Successfull";
    } else {
        cout << "Invalid Pass";
    }
}