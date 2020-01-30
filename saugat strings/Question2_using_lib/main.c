#include <stdio.h>
#include<string.h>
int main()
{
   char string[20];
   printf("Enter a string: ");
   scanf("%s",string);
   printf("Length of the string is %d\n",strlen(string));
    return 0;
}
