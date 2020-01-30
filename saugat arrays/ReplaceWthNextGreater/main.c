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
            if(array[j]>max){
                max=array[j];
               }
        }
printf("%d\t",max);
max=0;
    }
    return 0;
}
