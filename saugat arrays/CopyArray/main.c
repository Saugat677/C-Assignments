#include <stdio.h>

int main()
{
    int arrayLength;
    printf("No of Data?");
scanf("%d",&arrayLength);
int array[arrayLength],array2[arrayLength];
for(int i=0;i<arrayLength;i++){
scanf("%d",&array[i]);
}
for(int i=0;i<arrayLength;i++){
 array2[i]=array[i];
 printf("%d ",array2[i]);
}
    return 0;
}
