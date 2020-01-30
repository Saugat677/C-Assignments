#include <stdio.h>

int main()
{
   int roll_no,marks1,marks2,marks3;
   char name[20];
   printf("Enter student's name ");
   scanf("%s",name);
   printf("Enter student's roll no ");
   scanf("%d",&roll_no);
   printf("Enter marks of subject1 ");
   scanf("%d",&marks1);
   printf("Enter marks of subject2 ");
   scanf("%d",&marks2);
   printf("Enter marks of subject3 ");
   scanf("%d",&marks3);
   printf("Total is %d \n",marks1+marks2+marks3);
      printf("Average is %f \n",(marks1+marks2+marks3)/3.0);
      if((marks1+marks2+marks3)/3.0>=80 && marks1>=40 && marks2>=40 && marks3>=40){
          printf("Distinction\n");
      }
      else if((marks1+marks2+marks3)/3.0>=60 && marks1>=40 && marks2>=40 && marks3>=40){
          printf("First Division\n");
      }
      else if((marks1+marks2+marks3)/3.0>=50 && marks1>=40 && marks2>=40 && marks3>=40){
          printf("Second division\n");
      }else if((marks1+marks2+marks3)/3.0>=40 && marks1>=40 && marks2>=40 && marks3>=40){
          printf("Third division\n");
      }else{
          printf("Fail\n");
      }
    return 0;
}
