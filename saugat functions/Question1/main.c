#include <stdio.h>
int square(int);
int main()
{
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printf("Square of the number is %d\n",square(number));
    return 0;
}
int square(int num){
    return num*num;
}
