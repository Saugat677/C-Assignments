#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char secret_word[]="apple";
    char character_guessed;
    printf("Enter a letter:");
    scanf("%c",&character_guessed);
    for (int i=0;i<strlen(secret_word);i++){
      if (character_guessed==secret_word[i]){
         a=1;
         break;
      }else {
         a=0;
      }

    }
    printf("%d",a);
    return 0;
}
