#include <stdio.h>

int main()
{
    char string[20]={};
    printf("Enter a string: ");
    scanf("%s",string);
    for(int i=0;i<20;i++){
        if(string[i]!=0){
            printf("%c ",string[i]);
        }
    }
    return 0;
}
