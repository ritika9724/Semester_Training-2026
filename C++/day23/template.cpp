#include <iostream>
using namespace std;

template <class T>

void add(T a, T b){
   cout << a + b << endl;
}

int main(){
    add(10,20);
    add(10.3,20.5);
    add('B','A');

    return 0;
}