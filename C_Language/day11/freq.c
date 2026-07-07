#include <Stdio.h>

void freq(int n, int arr[]) {
    for (int i = 0; i < n; i++){
        int count = 1;
        if (arr[i] == -1)
            continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
            {
                arr[j] = -1;
                count++;
            }
        }
        printf("%d - %d\n", arr[i], count);
    }
}

int main() {
    int n ;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
freq(n,arr);
}




