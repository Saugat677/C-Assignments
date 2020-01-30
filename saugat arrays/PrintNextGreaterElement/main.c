#include <stdio.h>

int main()
{
    int arrayLength,max=0;
            printf("No of Data?");
    scanf("%d",&arrayLength);
    int array[arrayLength];
    for(int i=0;i<arrayLength;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<arrayLength;i++){
        for(int j=i+1;j<arrayLength;j++){
            if(array[i]<array[j]){
             printf("%d ",array[j]);
            max=0;
             break;

            }
            if(array[i]>array[j]){
                max=1;
            }
        }
        if(max==1 || i==arrayLength-1){
            printf(" -1 ");
        }

    }
    return 0;
}
