#include <stdio.h>

int main()
{
    int number;
            float sum=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        sum+=(1.0/i);
    }
    printf("Sum is %f\n",sum);
    return 0;
}
