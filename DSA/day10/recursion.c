#include<stdio.h>
// void fun(){
//     int num = 3;
//     // static int num = 3;        only one time memory allocate in data segment     
//     printf("hello from fun \n");
//     num--;
//     if(num>0){
//     fun();
//     }
// }

int display(int n){
    if(n<1){
        return 0;
    }
else{
    printf("%d\n",n);
    display(n-1);
    printf("%d\n",n);
}
}

int main(){
    // fun ();
    // return 0;

    int n =3;
    display (n);
}

// output :- give the output if stack is not full 