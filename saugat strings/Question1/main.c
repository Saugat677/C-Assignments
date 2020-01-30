#include <stdio.h>

int main()
{
char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);//cannot use scanf because one scanf detects "space" is gets out from scan f
    //eg: hello world if scanf is used then only hello gets printed
    printf("You Entered: %s\n",sentence);
    return 0;
}
