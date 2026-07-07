#include <iostream>
using namespace std;

class Days{
    string arr[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    public:
    string operator [](int index){
        if (index >= 0 && index <= 6){
            return arr[index];
        }
        return "invalid";
    }
};

int main(){
    Days d1;

    cout << d1[2];
    cout << d1[7];
    
}