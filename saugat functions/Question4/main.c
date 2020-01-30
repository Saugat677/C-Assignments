#include <stdio.h>
#include<math.h>
double fourthRoot(int);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("4th root of %d is %lf\n",number,fourthRoot(number));
    return 0;
}
double fourthRoot(int num){
    double fourthRoot;
    fourthRoot=sqrt(sqrt(num));
    return fourthRoot;
}
