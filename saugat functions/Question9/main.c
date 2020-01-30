#include <stdio.h>
int nth_term(int);
int main()
{
    int number;
    printf("Enter the term: ");
    scanf("%d",&number);
    printf("%d\n",nth_term(number));
    return 0;
}
int nth_term(int num){
    int num1=0,num2=1,temp;
    for(int i=3;i<=num;i++){
        temp=num1;
        num1=num2;
        num2=num1+temp;
    }
    if(num==1){
        return 0;
    }else if(num==2){
        return 1;
    }else{
    return num2;
    }
}
