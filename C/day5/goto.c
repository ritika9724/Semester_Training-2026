
// #include <stdio.h>

// int main(){
//     int i = 1;

//     loop:
//         if (i <= 10){
//             printf("%d ", i);

//             i++;
//             goto loop;
//         }

//     return 0;
// }

#include <stdio.h>

int main(){
    int i = 1;

    loop:
        if (i <= 10){
            printf("%d ", i);

            
        }
        i++;
        goto loop;
    return 0;
}