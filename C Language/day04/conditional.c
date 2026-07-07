#include <stdio.h>

int main(){
    int a = 10;

    if(a > 0){
        printf("a is a positive number");
    }
    else if(a < 0){
        printf("a is  a negative number");
    }
    else{
        printf("a is zero");
    }

    return 0;
}