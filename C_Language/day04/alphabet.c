#include<stdio.h>

int main() {

    char alp;
    scanf("%c", &alp);
    if(alp >='A' && alp <= 'z');
    alp=alp + 32;

    switch(alp) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Vowel");
        break;

        default:
        printf("Consonant");
    }
    return 0;
}
