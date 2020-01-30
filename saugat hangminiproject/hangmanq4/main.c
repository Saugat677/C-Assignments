#include <stdio.h>
#include <string.h>
int main()
{
    int a=0;
    char secrert_word[]="aeiou";
    char letters_guessed[]="g";
    for (int i=0;i<strlen(secrert_word);i++){
        for (int j=0;j<strlen(letters_guessed);j++){
            if (secrert_word[i]==letters_guessed[j]){
                a=1;
            }
        }
    }
        if (a==1){
            printf("2");
        }else
        {
            printf("1");
        }
        a=0;
        printf("\n");

    return 0;
}
