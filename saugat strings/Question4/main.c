#include <stdio.h>
#define length 20
int main()
{
    char string[length]={};
    printf("Enter a string: ");
    scanf("%s",string);
    for(int i=length-1;i>=0;i--){
        if(string[i]!=0){
            printf("%c",string[i]);
        }
    }
    printf("\n");
    return 0;
}
