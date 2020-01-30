#include <stdio.h>

int main()
{
    int arrayLength,max,secondlargest;
    printf("Enter the number of digits in array: ");
    scanf("%d",&arrayLength);
    int array[arrayLength];
    printf("enter %d number of data\n",arrayLength);
    for(int i=0;i<arrayLength;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
secondlargest=array[0];
for(int i=0;i<arrayLength;i++){
 if(array[i]>max){
     max=array[i];
 }
}
for(int i=0;i<arrayLength;i++){
    if(array[i]<max && array[i]>secondlargest){
        secondlargest=array[i];
     }
}
printf("Second largest term is: %d\n",secondlargest);
    return 0;
}
