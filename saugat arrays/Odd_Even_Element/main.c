#include <stdio.h>

int main()
{
    int arrayLength;
    printf("Enter the number of digits in array: ");
    scanf("%d",&arrayLength);
    int array[arrayLength];
    printf("enter %d number of data\n",arrayLength);
    for(int i=0;i<arrayLength;i++){
        scanf("%d",&array[i]);
    }
    printf("Even ");
    for(int i=0;i<arrayLength;i++){
        if (array[i]%2==0){
            printf("%d ",array[i]);
        }
    }
    printf(" Odd ");
    for(int i=0;i<arrayLength;i++){
        if (array[i]%2!=0){
            printf("%d ",array[i]);
        }
    }
    return 0;
}
