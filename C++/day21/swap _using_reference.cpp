
                    // swap using referance variable

#include<iostream>
using namespace std;

void fun (int &temp){
    temp = 100;
}

void swap(int &x, int &y){
   int temp = x;
    x = y;
    y = temp;
}

                    // using pointer 

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int a = 200 ,b = 300;
    cout<<a<<" "<<b<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    swap(&a,&b);                // passing address 
    cout<<a<<" "<<b<<endl;
  

    return 0;
}

