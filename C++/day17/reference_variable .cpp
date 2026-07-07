#include<iostream>
using namespace std;

// reference variable

// data_type &name = var    syntax of ref variable 
int main() {
    int a = 100;
    int b = 200;

    // int &temp;  // not null 
    int &temp = a;
    cout << temp << " "<< a << endl;

    temp = b;   // a = b    // reinitilization is not allowed 
    // &temp = b; // error
    cout << temp << " "<< a << endl;


    return 0;
}