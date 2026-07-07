#include <stdio.h>

int main(){
    char str[10];

    scanf("%[ab_c]", str);
    printf("%s", str);

    scanf("%[^ab]", str);
    printf("%s", str);

    return 0;
}