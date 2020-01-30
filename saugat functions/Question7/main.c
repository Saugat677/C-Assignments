#include <stdio.h>
void eqn_Solver(int,int,int);
int main()
{
   int a,b,c;
   printf("Enter the coefficient of X^2: ");
   scanf("%d",&a);
   printf("Enter the coefficient of x: ");
   scanf("%d",&b);
   printf("Enter the constant term: ");
   scanf("%d",&c);
   eqn_Solver(a,b,c);
    return 0;
}
void eqn_Solver(int a,int b,int c){
    double d=0;
    for(double i=0;i<=3;i+=0.2){
        d=a*i*i+b*i+c;
        printf("%d X^2 + %d X +%d = %lf\n",a,b,c,d);
    }
}
