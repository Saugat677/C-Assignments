#include <stdio.h>

int main()
{
    char string[20]={};
    int vowel=0,consonant=0;
    printf("Enter a string: ");
    scanf("%s",string);
    for(int i=0;i<20;i++){
    if(string[i]>=65 && string[i]<=90){
     string[i]+=32;
    }
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
            vowel++;
        }else if (string[i]>=97 && string[i]<=122){
            consonant++;
        }
    }
    printf("There are %d vowels and %d consonents in above string.\n",vowel,consonant);
    return 0;
}
