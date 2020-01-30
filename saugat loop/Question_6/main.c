#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);
    for(int i=1;i<=10;i++){
        printf("%d * %2d = %d\n",number,i,number*i);
    }
    return 0;
}
