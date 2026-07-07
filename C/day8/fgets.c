#include <stdio.h>
#include <string.h>

int main(){
    char str[10] = "Hello";

    // fgets(str, sizeof(str), stdin);
    // printf("%s", str);

    // string function: <string.h> - only declaration
    // strlen() - length of string

    printf("%d\n", strlen(str));
    printf("%d\n", sizeof(str));
    return 0;
}