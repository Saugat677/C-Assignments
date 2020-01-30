#include <stdio.h>
#include<string.h>
#define length 50
int anagram_Or_Not(char[],char[]);
int main()
{
    char word[length],check[length];
    printf("Enter your string: ");
    scanf("%s",word);
    printf("Enter another word to check anagram. ");
    scanf("%s",check);
    if(anagram_Or_Not(word,check)){
        printf("Given words are anagram.\n");
    }else{
        printf("Given words are not anagram.\n");
    }
    return 0;
}
int anagram_Or_Not(char char1[],char char2[]){
    int anagram=0;
    if(strlen(char1)==strlen(char2)){
    for(int i=0;i<strlen(char1);i++){
        for(int j=0;j<strlen(char2);j++){
            if(char1[i]==char2[j]){
                anagram++;
                char2[j]=' ';
            }
        }
    }
    if(anagram==strlen(char1)){
    return 1;
    }else{
        return 0;
    }
    }else{
        return 0;
    }

}
