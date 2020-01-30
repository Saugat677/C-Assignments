#include <stdio.h>

int main()
{
    int arrayLength,sum=0;
    printf("No of Data?");
scanf("%d",&arrayLength);
int array[arrayLength];
for(int i=0;i<arrayLength;i++){
scanf("%d",&array[i]);
}
for(int i=0;i<arrayLength;i++){
 sum+=array[i];
}
printf("Sum of array is %d\n",sum);
    return 0;
}
