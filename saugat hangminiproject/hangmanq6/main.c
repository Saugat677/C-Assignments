#include <stdio.h>
#include <string.h>
int main()
{
    int a=0;
    int b=0;
    char secrert_word[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letters_guessed[]="apple";
    for (int i=0;i<strlen(secrert_word);i++){
        for (int j=0;j<strlen(letters_guessed);j++){
            if (secrert_word[i]==letters_guessed[j]){
                a=1;
            }
        }
        if (a==1){
            b=b+a;
        }
        a=0;
    }


    printf("%d\n",b);

    return 0;
}
