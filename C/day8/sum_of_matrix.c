#include <stdio.h>

int main()
{
    int arr1[3][3];
    int arr2[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter the value of element arr1[%d][%d]", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Enter the value of element arr2[%d][%d]", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    int sum[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}