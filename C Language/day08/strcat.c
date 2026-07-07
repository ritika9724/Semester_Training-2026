#include <stdio.h>
#include <string.h>

int main(){
    char str1[10] = "Hello";
    char str2[20] = "Riya";


    printf("%s", strcat(str2, str1));

    char str3[10] = "Hellooooo";
    char str4[4] = "Riya";


    printf("%s", strcpy(str4, str3)); // buffer overflow (previously, fixed in new update)

    return 0;
    
}