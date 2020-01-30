#include <stdio.h>
#define size 3
int main()
{

    int matrix[size][size],determinant=0;
    printf("Enter the matrix\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<size;i++){
       determinant=determinant+(matrix[0][i]*((matrix[1][(i+1)%3]*matrix[2][(i+2)%3])-(matrix[1][(i+2)%3]*matrix[2][(i+1)%3])));
    }
    printf("Determinant is %d\n",determinant);
    return 0;
}
