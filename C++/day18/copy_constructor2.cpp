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
        cout << a << " " << b << endl;
    }

    void copy(A &ob){
        a = ob.a;
        b = ob.b;
    }
};//class ended

// void Add(A &ob1, A &ob2){
	// 	int sum1 = ob1.a + ob2.a;
	// 	int sum2 = ob1.b + ob2.b;
	// 	cout<<sum1<<" "<<sum2;
	// }

	 void Add(A &ob1, A *ptr){
		int a = ob1.a + ptr->a;
		int b = ob1.b + ptr->b;
		cout<<a<<" "<<b;
	}

int main(){
	A obj1(34,56);
	A obj2(obj1);

	Add(obj1,&obj2);
	return 0;
}