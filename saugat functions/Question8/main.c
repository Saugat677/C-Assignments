#include <stdio.h>
int is_prime(int);
int main()
{
    int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   if(is_prime(number)){
    printf("The number is prime.\n");
   }else{
    printf("The number is not prime.\n");
   }
    return 0;
}
int is_prime(int num){
    int boolean=1;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
          boolean=0;
          break;
        }
    }
   if(boolean==0){
       return 0;
   }else{
       return 1;
   }
}
