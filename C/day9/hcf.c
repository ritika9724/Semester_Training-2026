 // Write a C program to find LCM of two numbers.
 
 #include<stdio.h>

int HCF(int a , int b) {
    int rem;
        while(b%a !=0){ 
             rem = b%a;
           b = a;
          a = rem;
    }
    return a;
}
    int main() {
        int a, b;
        printf("Enter two no:");
        scanf("%d %d", &a,&b);
        printf("HCF = %d",HCF(a,b));
        return 0;
    }
