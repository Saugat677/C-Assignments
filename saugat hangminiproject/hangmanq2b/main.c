#include <stdio.h>
#include <string.h>
int main()
{
    int a=0;
    char secrert_word[]="apple";
    char letters_guessed[]="eikprs";
    for (int i=0;i<strlen(secrert_word);i++){
        for (int j=0;j<strlen(letters_guessed);j++){
            if (secrert_word[i]==letters_guessed[j]){
                a=1;
            }
        }
        if (a==1){
            printf("%c",secrert_word[i]);
        }else
        {
            printf("_");
        }
        a=0;
    }
    return 0;
}
