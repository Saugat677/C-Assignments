#include <stdio.h>

int main()
{
  int input;
  printf("Enter temperature in centigrade: ");
  scanf("%d",&input);
  if(input<0){
   printf("It's freezing\n");
  }else if(input <10){
   printf("It's very vold\n");
  }else if(input<20){
   printf("It's cold\n");
  }else if(input<30){
   printf("It's normal\n");
  }else if(input<40){
   printf("It's hot\n");
  }else if(input>=40){
   printf("It's very hot\n");
  }
    return 0;
}
