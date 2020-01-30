#include <stdio.h>

int main()
{
   int rows,columns;
   printf("Enter size of row of matrix ");
   scanf("%d",&rows);
   printf("Enter size of columns of matrix ");
   scanf("%d",&columns);
   int matrixA[rows][columns],matrixB[columns][rows],matrixC[rows][rows];
  printf("Enter first matrix \n");
   for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        scanf("%d",&matrixA[i][j]);
    }
   }
   printf("Enter second matrix \n");
   for(int i=0;i<columns;i++){
    for(int j=0;j<rows;j++){
        scanf("%d",&matrixB[i][j]);
    }
   }
   for(int i=0;i<rows;i++){
    for(int j=0;j<rows;j++){
        matrixC[i][j]=0;
    }
   }
   for(int i=0;i<rows;i++){
       for(int j=0;j<rows;j++){
           for(int k=0;k<columns;k++){
             matrixC[i][j]=matrixC[i][j]+(matrixA[i][k]*matrixB[k][j]);
           }
       }
   }
   printf("product of above matrix is.\n");
   for(int i=0;i<rows;i++){
       for(int j=0;j<rows;j++){
           printf("%d\t",matrixC[i][j]);
       }
       printf("\n");
   }
   return 0;
}
