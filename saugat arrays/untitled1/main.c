#include <stdio.h>

int main()
{
    int data,temp,boolean=0,counter=0;
  printf("no of data?:\n");
  scanf("%d",&data);
  int num[data];
  printf("Enter %d data\n",data);
  for(int i=0;i<data;i++){
      scanf("%d",&num[i]);
  }
for(int i=0;i<data;i++){
 for(int j=i+1;j<data;j++){
if(num[i]<num[j]){
    temp=num[j];
    num[j]=num[i];
    num[i]=temp;
}
 }
}
for(int i=0;i<data;i++){
 for(int j=i+1;j<data;j++){
     if(num[i]==num[j]){
         boolean=1;
         i=j;
     }
 }
 if(boolean==1){
     counter++;
 }
 boolean=0;
}
printf("%d\t",counter);
 return 0;
}
