#include <stdio.h>

int main()
{
    int number,remainder=0,check;
   for(int i=0;i<=1000;i++){
       check=0;
       number=i;
       while (number>0){
       remainder=number%10;
       number/=10;
       check=check+(remainder*remainder*remainder);
       }
       if(check==i){
           printf("%d\n",i);
       }
   }
    return 0;
}
