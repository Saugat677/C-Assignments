#include <stdio.h>

int main()
{
    int length,max=0;
    printf("Enter the number of digits you want.");
    scanf("%d",&length);
    int array[length];
    for(int i=0;i<length;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<length;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("\n%d\n",max);
    return 0;
}
