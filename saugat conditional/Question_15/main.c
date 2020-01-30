#include <stdio.h>

int main()
{
    int sideA,sideB,sideC;
    printf("Enter three side of triangle.\n");
    scanf("%d %d %d",&sideA,&sideB,&sideC);
    if((sideA+sideB)>sideC || (sideA+sideC)>sideB || (sideB+sideC)>sideA){
        printf("It is a valid triangle.\n");
    }else{
        printf("It is not a valid triangle.\n");
    }

    return 0;
}
