#include <stdio.h>
#include <string.h>
int main()
{
    char secret_word[] = "apple";
    char letters_guessed[]="aple";
    int a=0;
    for (int i=0;i<strlen(secret_word);i++){
        for (int j=0;j<strlen(letters_guessed);j++){
            if (secret_word[i]==letters_guessed[j]){
                a=a+1;
                break;

            }

        }
    }
    if (a==strlen(secret_word)) {
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
