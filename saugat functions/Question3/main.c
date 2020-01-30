#include <stdio.h>
double power(double,int);
int main()
{
    double number;
    int powerOfNum;
    printf("Enter a number: ");
    scanf("%lf",&number);
    printf("Enter the power: ");
    scanf("%d",&powerOfNum);
    printf("%0.2lf power %d is %0.6lf",number,powerOfNum,power(number,powerOfNum));
    return 0;
}
double power(double num,int pow){
    double value=1;
    for(int i=1;i<=pow;i++){
        value=value*num;
    }
    return value;
}
