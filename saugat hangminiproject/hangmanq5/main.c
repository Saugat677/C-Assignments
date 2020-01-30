#include <stdio.h>
#include <string.h>
int main()
{
    int a=0;
    char secrert_word[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letters_guessed[]="&";
    for (int i=0;i<strlen(secrert_word);i++){
        for (int j=0;j<strlen(letters_guessed);j++){
            if (secrert_word[i]==letters_guessed[j]){
                a=1;
            }
        }
    }
        if (a==1){
            printf("This is a valid character");
        }else
        {
            printf("This is an invalid character");
        }
        a=0;
        printf("\n");

    return 0;
}
