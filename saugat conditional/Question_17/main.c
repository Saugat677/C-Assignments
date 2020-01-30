#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character.\n");
    scanf("%c",&input);
  if(input=='a' || input=='e' || input=='i' || input=='o' || input=='u'){
   printf("This character is a vowel.\n");
  }else{
   printf("The character is a consonent.\n");
  }
    return 0;
}
