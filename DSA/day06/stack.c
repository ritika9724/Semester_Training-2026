#include<stdio.h>

int size = 5;
int top = -1;
                        // operation performed

int  isEmpty(){
    if(top == -1){
        return 1;      // true 
    }
    else{
        return 0;     // false 
    }
}

int isFull(){
    if(top == size-1){
        return 1;           // true 
    }
    else{
        return 0;           // true 
    }
    return 0;
}

int main(){
    int arr[size];
}