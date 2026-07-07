#include<iostream>
using namespace std;


       // implement the genric code we need to use Template
       // Template is used to give the different values in same class like first int second float
template<class T>
void add(T a, T b){
    cout<<a+b<<endl;
}


int main(){
    add(10,20);
    add(10.3,20.5);
    // add("Hello","world");
    add('A','A');   // ASCII value add
    return 0;
}