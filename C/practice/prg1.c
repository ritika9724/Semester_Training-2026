// #include<stdio.h>

// int main()  {

//     int n;
//     scanf("%d",&n);

//     int arr[n];

//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     int max = arr[0];

//     for(int i=1; i<n; i++){
//         if(arr[i]>max) {
//             max=arr[i];
//         }
//     }
//     printf("%d", max);
//    return 0;
// }






// #include<stdio.h>
// int main()  {

//     int arr[n];
//     int largest = arr[0] ;
//     int secondlargest = 1;
//     printf("Enter the array: ");
//     scanf("%d",&arr[n]);

//     for(int i =0; i<=5; i++){
//         if(largest>arr[i]){
//             largest = arr[5];
//         }
//         printf("%d",largest);
//     }
//     return 0;
// }    



// string

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[50];

//     printf("Enter the String: ");
//     scanf("%s", str);

//     int len =  strlen(str);

//     for(int i=len-1; i>=0; i--){
//         printf("%c", str[i]);
//     }
// return 0;
// }




#include<stdio.h>
#include<string.h>

int main() {

    char str[50];
    int start=0;
    
     printf("Enter the string: ");
     scanf("%s" , str);
  
      int end = strlen(str)-1;
      int flag = 1;
    while(start<end){
        if(str[start] == str[end]){
            flag = 0;
            break;
        }
        start++;
            end--;
    }
    if(flag) {
        printf("It is a palindrome");
    }
    else{
        printf("Not Palindrome");
    }
return 0;

}