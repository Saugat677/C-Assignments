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
    printf("Pairs are:\n");
    for(int i=0;i<arrayLength;i++){
        for(int j=i+1;j<arrayLength;j++){
            if(array[i]+array[j]==15){
                printf("%d %d",array[i],array[j]);
            printf("\n");
            }
        }
    }
    return 0;
}
