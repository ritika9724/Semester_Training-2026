#include <iostream>
using namespace std;

/*
void fun(){
	printf("fun - line 1\n");
	printf("fun - line 2\n");
	return;
	printf("fun - line 3\n");
	printf("fun - line 4\n");
}

int main(){
	printf("main - line 1\n");
	fun();
	printf("main - line 2\n");
	fun();
	printf("main - line 3\n");
	printf("main - line 4\n");
}
*/

/*
void fun(){
	printf("fun - line 1\n");
	fun2();
	printf("fun - line 2\n");
}

void fun2(){
	printf("fun2 - line 1\n");
	return;
	printf("fun2 - line 2\n");
}

int main(){
	printf("main - line 1\n");
	fun();
	printf("main - line 2\n");
}
    */

/*
int display(int n){
    if (n < 1)
       return;
    else {
    	printf("%d\n",n);
    	display(n-1);
    	printf("%d\n",n);    
	}
}

int main(){
	int n =3;
	display(n);
}
*/

/*
#include <stdio.h>

int fun(int n){
    if (n == 4)
       return n;
    else   return 2*fun(n+1);
}

int main(){
   printf("%d ", fun(2));
   return 0;
}
*/

/*
#include <stdio.h>

int fun1(int n){
    if (n <= 1)
       return n;
    else return n*fun2(n-1);   
}

int fun2(int n){
    if (n <=1)
       return n;
    else return n*fun1(n-1);    
}

int main(){
   printf("%d ", fun1(4));
   return 0;
}
*/

/*
#include<stdio.h>

void show(int n){
    if (n > 4000)
        return;
    printf("%d ", n);
    show(2*n);
    printf("%d ", n);
}

int main(){
    show(1000);
   
    return 0;
}
*/

/*
#include<stdio.h>

int ADD(int n)
{	if (n ==1 || n==2){
        return 1;    
	}
    return ADD(n-1)+ADD(n-2);
}
 
int main(){
    int j = ADD(7);
    printf("%d",j);
    return 0;
}
*/

void fun(int n){
  if (n == 0){
        return;
    }
    printf("%d", n%2);
    fun(n/2);
}

int main(){
    fun (25);
}