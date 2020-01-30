#include <stdio.h>
#include <string.h>
int main()
{
    int a=0;
    char secret_word[]="abcdefghijklmnopqrstuvwxyz";
    char letters_guessed[]="eikprs";
    printf("Available letters:");
    for (int i=0;i<strlen(secret_word);i++){
        for (int j=0;j<strlen(letters_guessed);j++){
            if (secret_word[i]==letters_guessed[j]){
                a=1;
            }
        }
        if (a!=1){
            printf("%c",secret_word[i]);
        }else
        {
            printf("");
        }
        a=0;
    }
    printf("\n");
    return 0;
}
