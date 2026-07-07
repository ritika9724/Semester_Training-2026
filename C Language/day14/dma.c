#include<stdio.h>
#include<stdlib.h>


// Dynamic Memory Allocation using malloc()
// This program allocates memory for an integer
// and stores a value using a pointer.

int main() {

    // int*p = (int*)malloc(10*sizeof(int));
    // *p = 20;
    // printf("%d\n", p);
    // printf("%d\n%d\n%d", p , &p, *p);
    // printf("%zu", sizeof(p));
    



    // double*p = (double*)malloc(3*sizeof(double));
    // *p = 30;
    // *(p+1) = 40;
    // *(p+2) = 50;
    // // printf("%p\n%p\n%p\n", p , (p+1), p+2);     
    // printf("%lf\n%lf\n%lf\n", *p , *(p+1), *(p+2));
    // printf("%zu", sizeof(p));

    // return 0;



    int*p = (int*)malloc(20*sizeof(int));

    // *p = 30;
    // *(p+1) = 40;
    // *(p+2) = 50;

   for(int i=0; i<5; i++)
    {
        scanf("%d",p+i);
    }
    for(int i = 1; i<20; i++){
        scanf("%d\n",*(p+i));
    }

    printf("%zu", sizeof(p));
    return 0;
}