#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:\n");
        scanf("%d",&number);
    for(int i=1;i<=number;i++){
        printf("Cube of %d is %d\n",i,i*i*i);
    }
    return 0;
}
