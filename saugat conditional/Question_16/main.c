#include <stdio.h>

int main()
{
char input;
printf("Enter a character.\n");
scanf("%c",&input);
if((input>=65 && input<=90) || (input>=97 && input<=122)){
 printf("The character is an alphabet.\n");
}else if(input>=48 && input<=57){
 printf("The character is a number.\n");
}else{
    printf("The character is a special character.\n");
}
    return 0;
}
