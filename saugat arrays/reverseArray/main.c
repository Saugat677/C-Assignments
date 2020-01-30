#include <stdio.h>

int main()
{
    int arrayLength;
    printf("No of Data?");
scanf("%d",&arrayLength);
int array[arrayLength];
for(int i=0;i<arrayLength;i++){
scanf("%d",&array[i]);
}
for(int i=arrayLength-1;i>=0;i--){
 printf("%d\t",array[i]);
}
    return 0;
}
