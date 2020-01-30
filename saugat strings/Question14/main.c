#include <stdio.h>

int main()
{
    char string[20]={};
    printf("Enter a string: ");
    scanf("%s",string);
    for(int i=0;i<20;i++){
        if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122)){
            printf("%c",string[i]);
        }
    }
    printf("\n");
    return 0;
}
