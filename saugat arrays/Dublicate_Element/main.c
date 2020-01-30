#include <stdio.h>

int main()
{
    int no_Of_Data,repeat=0,count=0;
    printf("No od data?.\n");
    scanf("%d",&no_Of_Data);
    int array[no_Of_Data];
    for(int i=0;i<no_Of_Data;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<no_Of_Data;i++){
        for(int j=i+1;j<no_Of_Data;j++){
            if(array[i]==array[j]){
                        ++repeat;
            }
        }
        if(repeat==1){
            count++;
        }
        repeat=0;
    }
    printf("Total no of repeated elements are %d\n",count);
    return 0;
}
