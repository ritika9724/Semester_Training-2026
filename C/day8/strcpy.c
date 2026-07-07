#include <stdio.h>
#include <string.h>

int main(){
    char str1[10] = "Hello";
    char str2[20] = "Riya";

    // strcpy - copy string

    printf("%s", strcpy(str2, str1));
    return 0;
}