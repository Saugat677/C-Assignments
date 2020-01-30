#include <stdio.h>

int main()
{
   int array1[3],array2[3],array3[6],temp;
   printf("Enter elements of array 1: ");
   for(int i=0;i<3;i++){
   scanf("%d",&array1[i]);
   }

   printf("Enter elements of array 2: ");
   for(int i=0;i<3;i++){
   scanf("%d",&array2[i]);
   }
   for(int i=0;i<3;i++){
array3[i]=array1[i];
   }
   for(int i=3;i<6;i++){
array3[i]=array2[i%3];
   }
   for(int i=0;i<6;i++){
    for(int j=i;j<6;j++){
        if(array3[i]<array3[j]){
           temp=array3[i];
           array3[i]=array3[j];
           array3[j]=temp;
        }
    }

   }
   for(int i=0;i<6;i++){
   printf("%d ",array3[i]);
   }

    return 0;
}
