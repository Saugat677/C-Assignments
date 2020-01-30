#include <stdio.h>

int main()
{
    char string[200]={};
    int repeat[200]={},max=0,i,length=0;
    printf("Enter a string: ");
    gets(string);
    for(int i=0;i<200;i++){
        if(string[i]!=0){
            length++;
        }
    }
    for(i=0;i<length;i++){
        max=string[i];
        repeat[max]++;
        max=0;
    }
    max=0;
    length=0;
    for(i=0;i<127;i++){
        if(repeat[i]>max){
            max=repeat[i];
            length=i;
        }
    }
    printf("The Highest frequency of character %c\n",length);
        printf("and is repeated %d times\n",max);
    return 0;
}
