#include<iostream>
using namespace std;
class A{
int a;
virtual void fun(){}; 
//4->if we use->virtual->8 byte->beacuse of using ptr->64->16byte ans->32->8byte ans
};
int main(){
A obj;
cout<<sizeof(obj);  //int->4 bytes
    return 0;
}