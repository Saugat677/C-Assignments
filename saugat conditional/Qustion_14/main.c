#include <stdio.h>

int main()
{
  int angleA,angleB,angleC;
  printf("Enter three angle of triangle.\n");
  scanf("%d %d %d",&angleA,&angleB,&angleC);
  if(angleA+angleB+angleC==180){
   printf("It is a valid triangle\n");
  }else{
   printf("It is not a triangle\n");
  }
    return 0;
}
