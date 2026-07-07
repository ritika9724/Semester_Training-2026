#include <stdio.h>
#include <string.h>

int main(){
    char s1[10] = "Hello";
    char s2[20] = "hello";
    
    printf("%d\n", strcmp(s1,s2));
    return 0;
}