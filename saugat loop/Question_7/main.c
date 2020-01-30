#include <stdio.h>

int main()
{
    int number,count=0,sum=0;
   printf("How many odd number do you want to print:\n");
   scanf("%d",&number);
   for (int i=1;count<number;i++){
       if(i%2!=0){
           printf("%d\t",i);
           sum+=i;
          count++;
       }
   }
   printf("Sum is %d\n",sum);
   return 0;
}
