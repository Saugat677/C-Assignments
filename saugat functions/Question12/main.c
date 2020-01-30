#include <stdio.h>
void factors(int);
int main()
{
   int number;
   printf("Enter a number. ");
   scanf("%d",&number);
   factors(number);
   printf("\n");
    return 0;
}
void factors(int num){
    int counter=0;
    for(int i=2;i<=num;i++){
        do{
        if(num%i==0){
        num=num/i;
        if(counter==0){
        printf("%d ",i);
        counter++;
        }else{printf("*%d ",i);}
        }
        }while (num%i==0);
        }
}
