#include <stdio.h>

int main()
{
    int rows,columns;
    printf("Enter number of rows of a matrix ");
    scanf("%d",&rows);
    printf("Enter number of rows of a matrix ");
    scanf("%d",&columns);
    int matrixA[rows][columns],matrixB[rows][columns],matrixC[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matrixA[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matrixB[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
       printf("%d\t",matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
