#include <stdio.h>
#include<math.h>
int main()
{
int a,b,c,root1,root2;
printf("Enter the coefficient of x2\n");
scanf("%d",&a);
printf("Enter the coefficient of x1\n");
scanf("%d",&b);
printf("Enter the constant\n");
scanf("%d",&c);
if(((b*b)-(4*a*c))>=0){
    root1=(float)(-b-(sqrt(b*b-(4*a*c))))/(2*a);
    root2=(float)(-b+(sqrt(b*b-(4*a*c))))/(2*a);
printf("roots of the equation are %d %d\n",root1,root2);
}
    return 0;
}
