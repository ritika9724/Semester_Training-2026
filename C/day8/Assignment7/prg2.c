// Write a C program to check whether a number is palindrome or not.

#include<stdio.h>
int main() {

    int temp , n ,digit, rev=0;
    scanf("%d", &n);
    temp = n;

   while(n>0){ 
    digit = n%10;                // find the last digit 
    rev = rev*10+digit;          // add the number in reverse
    n = n/10;                   // remove the last digit
   }

    if(temp==rev){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }

    return 0;
}