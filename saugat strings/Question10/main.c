#include <stdio.h>

int main()
{
    char string[200]={};
   int start=0,length=0;
    printf("Enter a string: ");
   gets(string);
   printf("Enter the starting position and length\n");
   scanf("%d %d",&start,&length);
   for(int i=start-1;i<(start+length-1);i++){
       printf("%c",string[i]);
   }
   printf("\n");
    return 0;
}
