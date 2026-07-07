#include <stdio.h>

void printMatrix(int row, int col, int mat[][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
        printf("%d",mat[i][j]);
    }

}
void matrixSum(int r1, int r2, int c1, int c2, int m1[][c1], int m2[][c2]){
// int r1 = sizeof(m1)/sizeof(m1[0]);
// int r2 = sizeof(m2)/sizeof(m2[0]);
int ans[r1][r2];
if(c1==r2){
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
              ans[i][j]=m1[i][j] + m2[i][j];
        }
           printMatrix(r1,c1,ans);
    }  
} 
    else{
        printf("Matrix Addition is not possible");
    }
}
  
   int main() { 
    int r1, r2, c1, c2;
    
    printf("Enter No. of rows and col of a matrix : ");
    scanf("%d%d%d%d", &r1,&r2,&c1,&c2);
    
    int m1[r1][c1], m2[r2][c2];
    printf("Enter Input of matrix 1 : ");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    
    // input for matrix 2
    printf("Enter Input of matrix 2 : ");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d",&m2[i][j]);
        }
    }
    
     matrixSum(r1,r2,c1,c2,m1,m2);
     
    return 0;
    
    
}
