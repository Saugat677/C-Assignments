#include <stdio.h>

int main()
{
    int arrayLength,max,min;
    printf("Enter the number of digits in array: ");
    scanf("%d",&arrayLength);
    int array[arrayLength];
    for(int i=0;i<arrayLength;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    for(int i=0;i<arrayLength;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    min=max;
    for(int i=0;i<arrayLength;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("Max element of array is %d\n",max);
    printf("Min element of array is %d\n",min);
    return 0;
}
