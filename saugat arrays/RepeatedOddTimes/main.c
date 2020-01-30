#include <stdio.h>

int main()
{
    int no_Of_Data,repeat=0,temp;
    printf("No od data?.\n");
    scanf("%d",&no_Of_Data);
    int array[no_Of_Data];
    printf("Enter data:\n");
    for(int i=0;i<no_Of_Data;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<no_Of_Data;i++){
        for (int j=i+1;j<no_Of_Data;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("Elements that appeared odd number of times:\n");
for(int i=0;i<no_Of_Data;i++){
    for(int j=i+1;j<no_Of_Data;j++){
      if(array[i]==array[j]){
          repeat++;
          i=j;
      }
    }
    if(repeat%2==0){
        printf("%d\t",array[i]);
    }
    repeat=0;
}
printf("\n");
    return 0;
}
