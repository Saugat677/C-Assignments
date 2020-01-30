#include <stdio.h>

int main()
{
    int number,sum=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        sum+=i;
    }
    printf("Sum upto %d for 1 is %d\n",number,sum);
    return 0;
}
