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
    /*if question ask for 2 pr=osition then
     * for(int i=arrayLength-1;i>(arrayLength-2-1);i--){
     * printf("%d",array[i]);
     * }*/
    printf("%d ",array[arrayLength-1]);
    for(int i=0;i<arrayLength-1;i++){//if 2 position the condition is i<arrayLength-position
        printf("%d ",array[i]);
    }
    return 0;
}
