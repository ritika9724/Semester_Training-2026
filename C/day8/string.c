#include <stdio.h>

int main()
{
    char s[] = {'a', 'b', 3};
    printf("%u", sizeof(s[1]));

    char str[] = "helllo";
    str[1] = 'y';

    printf("%s", str);

    char *st = "Hello";
}