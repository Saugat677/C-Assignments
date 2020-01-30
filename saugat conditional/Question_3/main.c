#include <stdio.h>
//This is question 2;
int main()
{
  int num1;
  printf("Enter a number");
  scanf("%d",&num1);
  if(num1%2==0){
   printf("%d is an even number",num1);
  }else{
   printf("%d is an odd number",num1);
  }
    return 0;
}
