#include <stdio.h>

int main()
{
    int arrayLength,boolean=1;
            printf("No of Data?");
    scanf("%d",&arrayLength);
    int array[arrayLength];
    for(int i=0;i<arrayLength;i++){
        scanf("%d",&array[i]);
    }
    printf("Missing: ");
    for(int i=1;;i++){
        for(int j=0;j<arrayLength;j++){
            if(i-array[j]==0){
                boolean=0;
                break;
            }
        }
        if(boolean==1){
            printf("%d\t",i);
            break;
        }
        boolean=1;
    }
    return 0;
}
