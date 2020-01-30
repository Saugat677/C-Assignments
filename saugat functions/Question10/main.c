#include <stdio.h>
int nth_term(int);
int main()
{
    int number;
    printf("Enter the term: ");
    scanf("%d",&number);
    if(nth_term(number)==0){
        printf("The %d term of fibonacci series is prime.\n",number);
    }else{
        printf("The %d term of fibonacci series is composite.\n",number);
    }
    return 0;
}
int nth_term(int num){
    int num1=0,num2=1,temp,boolean=0;
    for(int i=3;i<=num;i++){
        temp=num1;
        num1=num2;
        num2=num1+temp;
    }
    if(num==1){
        return 0;
    }else if(num==2){
        return 0;
    }else{
    for(int i=2;i<=num2/2;i++){
     if(num2%i==0){
         boolean=1;
     }
    }
    if(boolean==0){
        return 0;
    }else{
        return 1;
    }
    }
}
