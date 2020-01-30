#include <stdio.h>

int main()
{
    int length,variable_Counter=0,temp;
printf("Enter the number of digits you want.");
scanf("%d",&length);
int array[length];
for(int i=0;i<length;i++){
    scanf("%d",&array[i]);
}
for(int i=0;i<length;i++){
 for(int j=i+1;j<length;j++){
if(array[i]>array[j]){
    temp=array[j];
    array[j]=array[i];
    array[i]=temp;
}
 }
}
for(int i=0;i<length;i++){
 for(int j=i;j<length;j++){
     if(array[i]==array[j]){
         variable_Counter++;
         i=j;
         }
 }
 printf("%d - %d\n",array[i],variable_Counter);
 variable_Counter=0;
}
    return 0;
}
