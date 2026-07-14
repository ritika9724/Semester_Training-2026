#include<iostream>
using namespace std;
 
class Stack{
                    // data
int *arr;
int size;
int top = -1;
                        // operation performed
public:

Stack(int s){
    size = s;
    arr = new int[size];
}
                                // push operation

void push(){
    if(top == size-1){
        cout<<"Stack is full";
        return;
    }
    else{
        int val;
        cout<<"Enter a val :";
        cin>>val;
        top++;
        arr[top] = val;
        cout<<"Data inserted !!\n";
}
}

void pop(){
    if(top == -1){
        cout<<"Stack is empty";     // underflow condition
        return;      
    }
    else{
        top--;
          cout << "deleted!!";
    }
}

                                // is Empty

int  isEmpty(){
    if(top == -1){
        return 1;      // true 
}
    else{
        return 0;     // false 
    }
}
                                // is Full

int isFull(){
    if(top == size-1){
        return 1;           // true 
    }
    else{
        return 0;           // true 
    }
    return 0;
}

int peek(){
    return arr[top];
}
};

int main( )
{
    Stack s1(5);
	int ch;
	char choice = 'y';
	do
	{
		printf ("\n 1. push ") ;
		printf ("\n 2. pop")  ;
		printf ("\n 3. top") ;
		printf ("\n 4. isempty ")	 ;
		printf ("\n 5. isfull")  ;
		printf ("\n 6. EXIT      ")  ;
		printf ("\n\n Enter Your Choice = ") ;
		scanf ("%d",&ch);
		switch(ch)
		{
			case 1:
				s1.push ( );
				break;
			case 2:
				s1.pop ( );
				break;
			case 3:
				cout<<"top element : " <<s1.peek ( )<<endl;
				break;
			case 4:
				s1.isEmpty ( );
				break;
			case 5:
				s1.isFull ( );
				break;
			case 6:
				choice='n';
				break;
			default:
				printf("INVALID CHOICE");
		}
	}while(choice=='y');
}