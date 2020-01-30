#include <stdio.h>
#include <math.h>
int main()
{
   int number,power=0;
   double sum=0,factorial=1;
   printf("Enter a number: ");
   scanf("%d",&number);
   for(int i=1;i<=10;i++){
      for(int j=1;j<=power;j++){
       factorial*=j;
      }
       if(i%2==0){
           sum=sum-(pow(number,power)/factorial);
       }else{
           sum=sum+(pow(number,power)/factorial);
       }
       power+=2;
       factorial=1;
   }
   printf("%lf\n",sum);
    return 0;
}
