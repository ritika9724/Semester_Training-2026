// C program to calculate total average and percentage of five subjects

#include<stdio.h>

int main() {

    int a,b,c,d,e,total,avg;
    float per;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;
    avg=total/5;
    per=total/5.0;

    
    printf("total=%d\n",total);
    

    printf("avg=%d\n",avg);

    printf("per=%.2f",per);

    return 0;
}