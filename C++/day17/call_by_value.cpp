#include<iostream>
using namespace std;

// call by value
void fun(int temp){
// void fun (int &temp){    // reference variable
    temp=100;
}

int main() {
    int a =200;
    cout<<a<<endl;
    fun(a);
    cout<<a;

    return 0;
}