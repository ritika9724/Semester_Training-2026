// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<stdio.h>

int main() {
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b){
        printf("Traingle is Valid");
    }
    else{
        printf("Triangle is not valid");
    }
    return 0;
}