#include <stdio.h>

int main()
{
    int sum=0,number;
    printf("Enter 10 values:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&number);
        sum+=number;
    }
    printf("Sum of numbers is %d\n",sum);
    printf("Average of numbers is %0.2f\n",sum/10.0);
    return 0;
}
