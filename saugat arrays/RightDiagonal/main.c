#include <stdio.h>

int main()
{
    int size,sum=0;
    printf("Enter size of square matrix: ");
    scanf("%d",&size);
    int matrix[size][size];
    printf("Enter the matrix\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=size-1;i>=0;){
        for(int j=0;j<size;j++){
           sum+=matrix[i][j];
           i--;
        }
    }
    printf("The sum of right diagonal is %d\n",sum);
    return 0;
}
