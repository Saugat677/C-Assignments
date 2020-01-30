#include <stdio.h>

int main()
{
    int rows,columns;
    printf("Enter no of rows: ");
    scanf("%d",&rows);
    printf("Enter no of columns: ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
