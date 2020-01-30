#include <stdio.h>

int main()
{
int maths,physics,chemistry;
printf("Enter your marks in maths\n");
scanf("%d",&maths);
printf("Enter your marks in physics\n");
scanf("%d",&physics);
printf("Enter your marks in chemistry\n");
scanf("%d",&chemistry);
if(maths>=65 && physics>=55 && chemistry>=50 && (maths+physics+chemistry)>=180){
printf("You are eligible for the course\n");
}else if ((maths+physics)>=140 || (maths+chemistry)>=140){
    printf("you are eligible for the course\n");
}
    return 0;
}
