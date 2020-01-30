#include <stdio.h>

int main()
{
    int rows,columns,zeroCounter=0;
    printf("Enter no of rows: ");
    scanf("%d",&rows);
    printf("Enter no of columns: ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    printf("Enter the matrix\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(matrix[i][j]==0){
                zeroCounter++;
            }
        }
    }
    if(zeroCounter>((rows*columns)/2)){
        printf("The given matrix is sparse.\t");
    }else printf("The given matrix is not sparse.\t");
    printf("Sparsity %d/%d.\n",zeroCounter,rows*columns);
    return 0;
}
