#include<iostream>
using namespace std;


                        // function overloading
                        
// type of argument, number of argument, order of argument will be different 

class Add{
    public:
    void fun(int a, int b){
        cout<<" a+b : "<<a+b<<endl;
    }

      void fun(int a, int b, int c){
        cout<<" a+b+c : "<<a+b+c<<endl;
    }

      void fun(int a, int b, int c, int d){
        cout<<" a+b+c+d  : "<<a+b+c+d<<endl;
    }

    void fun(int a, char ch){
        cout<<"a+ch : "<<a+ch;
    }

    void fun(char ch, int a){
        cout<<"a+ch : "<<a+ch;
    }
    
};


int main(){
    Add obj;
    obj.fun(12,7);
    obj.fun(12,7,9);
    obj.fun(12,7,9,5);
    obj.fun(12, 'A');


}