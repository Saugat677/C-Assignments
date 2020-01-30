#include <stdio.h>

int main()
{
 char grades;
 printf("Enter your gardes. ");
 scanf("%c",&grades);
 switch (grades){
  case 'e':
     printf("Excellent.\n");
     break;
 case 'v':
     printf("Very Good.\n");
     break;
 case'g':
     printf("Good.\n");
     break;
 case'a':
     printf("Average.\n");
 break;
 default:
     printf("Fail.\n");
     break;
 }
    return 0;
}
