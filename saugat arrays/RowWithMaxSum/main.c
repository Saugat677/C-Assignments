#include <stdio.h>

int main()
{
    int rows,columns,max=0,index=0;
    printf("Enter no of rows: ");
    scanf("%d",&rows);
    printf("Enter no of columns: ");
    scanf("%d",&columns);
    int matrix[rows][columns],sum=0;
    printf("Enter the matrix\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<columns;i++){
        max+=matrix[0][i];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            sum+=matrix[i][j];
        }
        if(max<sum){
            max=sum;
            index=i;
        }
        sum=0;
    }
    for(int i=0;i<columns;i++){
        printf("%d\t",matrix[index][i]);
    }

    return 0;
}
