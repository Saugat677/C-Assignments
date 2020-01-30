#include <stdio.h>

int main()
{
    int number,sum=0;
    printf("Enter a number:\n");
        scanf("%d",&number);
    for(int i=1;i<=number;i++){
        printf("%d\t",i*i);
    sum+=i*i;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
