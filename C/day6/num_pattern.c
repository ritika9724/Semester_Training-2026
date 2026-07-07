

#include<stdio.h>

int main() {

    int r=5;
    int c=9;
    int n=5;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=r-1; j++){
            printf("");
        }

        for(int j=1; j<=i; j++){
        printf("%d",j);
        if(i==1 || j==1){
            printf("");
        }
        }
        printf("\n");
    }

    return 0;
}
