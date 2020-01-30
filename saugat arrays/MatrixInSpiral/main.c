#include <stdio.h>

int main()
{
    int rows,columns,num1=0,num2=0,control=0;
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
        for(int i=0;i<rows*2-1;i++){
            control=i/2;
            for(int j=0;j<columns-1;j++){
                if(i%2==0){
                    printf("%d\t",matrix[num2][num1]);
                    if(num1<columns && control==0){
                        num1++;
                    }else{
                        num1--;
                        //control=2;
                    }
                }else{
                    if(control==0){
                    printf("%d\t",matrix[num2][num1]);
                     num2++;
                    if(num2==columns-1){
                    //control=1;
                    }
                    }else if(control==1){
                        printf("%d\t",matrix[num2][num1]);
                        num2--;
                       // control=0;
                    }
                }
            }
        }
    return 0;
}
