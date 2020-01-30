#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char list_of_words[4][20]={"apple","ball","cat","dog"};
    srand(time(NULL));
    char random_word[20];
    strcpy(random_word,list_of_words[rand()%4]);
    printf("%s\n",random_word);
    return 0;
}
