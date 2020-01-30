#include <stdio.h>
void sum_of_prime(int);
int main()
{
    int number,end;
    printf("Enter starting point: ");
    scanf("%d",&number);
    printf("Enter ending point: ");
    scanf("%d",&end);
for(int i=number;i<=end;i+=2){
    sum_of_prime(i);
}
    return 0;
}
void sum_of_prime(int num){
    int boolean=0,number[num],counter=0;

    for(int i=1;i<=num;i++){
        for(int j=2;j<=i/2;j++){
        if(i%j==0){
            boolean=1;
        }
        }
        if(boolean==1){
         boolean=0;
        }else{
            number[i]=i;
        }
    }
    for(int i=0;i<num;i++){//use i<=num/2 if order doesn't matter.
        for(int j=0;j<num;j++){
            if(number[i]+number[j]==num){
                if(counter==0){
                printf("%d + %d = %d\n",i,j,i+j);
                counter++;
                }
             }
        }
    }
    counter=0;
}
