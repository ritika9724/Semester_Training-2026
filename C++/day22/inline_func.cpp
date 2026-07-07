#include<iostream>
using namespace std;


// inline keyword replace the code where we calling.it execute the code in single line 
//  not used for long code to run as inline 
inline int sqrt(int a){
return a*a;
}

int main(){
    cout<<sqrt(2);
    return 0;
}
