#include<iostream>
using namespace std;
class A{
	public:
	int a;
	int b;

	A(){}
	A(int a,int b){
		this->a = a;
		this->b = b;
	}

    void show(){
        cout<<a<<" "<<b<<endl;
    }
	 
    void copy(A &ob){
        a = ob.a;
        b = ob.b;
    }

	static void Add(A *ptr, A &ob2){
        int a = ptr->a + ob2.a;
        int b = ptr->b + ob2.b;
        
        cout << "a: " << a << " b: " << b;
    }
};//class ended

int main(){
	A obj1(34,56);
	A obj2(obj1);

	A::Add(&obj1, obj2);   // obj1.Add(obj2)
    A show();
	return 0;
}