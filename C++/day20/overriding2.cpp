#include<iostream>
using namespace std;
class payment{
    public:
    virtual void pay(){
        cout<<"payment processing ";
    }

};
class upi:public payment{
    public:
    void pay(){
        cout<<"upi processing :";
    }

};
class CreditCard:public payment{
    void pay(){
        cout<<"credit payment processing :";
    }

};
class Netbanking:public payment{
void pay(){
        cout<<"netbanking processing :";
    }
};
int main(){
    payment *ptr=nullptr;  //static binding/early binding->to overcome this we use the additional keyword that is known as virtual keyword
   int ch;
    cout<<"1. upi"<<endl;
    cout<<"2. creditcard"<<endl;
    cout<<"3. netbanking"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
        ptr=new upi();
        break;
        case 2:
        ptr=new CreditCard();
        break;
        case 3:
        ptr=new Netbanking();
        break;
        default:
        cout<<"invalid options try again!";
    }
    ptr->pay();  //-> run time->upi processing->dynamic binding

    return 0;
}

//dynamic binding->virtual keyword
//static binding->not use virtual keyword