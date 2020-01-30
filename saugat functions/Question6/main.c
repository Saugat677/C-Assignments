#include <stdio.h>
#include<math.h>
double triangleArea(int a,int b,int c);
int main()
{
    int number,number2,number3;
    printf("Enter sides of triangle:\n");
    scanf("%d %d %d",&number,&number2,&number3);
    printf("Area of triangle with sides %d %d %d is %lf\n",number,number2,number3,triangleArea(number,number2,number3));
    return 0;
}
double triangleArea(int a,int b,int c){
    double s=(a+b+c)/2,area;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
