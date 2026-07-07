// Create a class named 'Programming'. While creating an object of the class, if nothing is passed
// to it, then the message "I love programming languages" should be printed. If some String is passed
// to it, then in place of "programming languages" the name of that String variable should be printed.
// For example, while creating the object if we pass "cpp", then "I love cpp" should be printed.

#include<iostream>
using namespace std;

class programming{
    string language;
    
public:

    programming(){
        cout<<"I love programming languages"<<endl;
    }

    programming(string s){
        language = s;
        cout << "I love " << language << endl;
    }
};

int main(){
    programming obj;
    programming obj2("cpp");
}