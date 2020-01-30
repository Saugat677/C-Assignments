#include <stdio.h>

int main()
{
  int dayNumber;
  printf("Enter the number of day of week.\n");
  scanf("%d",&dayNumber);
  if(dayNumber==1){
   printf("Sunday.\n");
  }else  if(dayNumber==7){
      printf("Saturday.\n");
     }else  if(dayNumber==2){
      printf("Monday.\n");
     }else  if(dayNumber==3){
      printf("Tueday.\n");
     }else  if(dayNumber==4){
      printf("Wednesday.\n");
     }else  if(dayNumber==5){
      printf("Thrusday.\n");
     }else  if(dayNumber==6){
      printf("Friday.\n");
     }
    return 0;
}
