#include <stdio.h>
int OddEven(int);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(OddEven(number)==1){
        printf("%d is odd\n",number);
    }else{
        printf("%d is even\n",number);
    }
    return 0;
}
int OddEven(int number){
    return number%2;
}
