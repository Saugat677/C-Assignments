#include <stdio.h>

int main()
{
    char string[20]={};
    int length=0;
    printf("Enter a string: ");
    scanf("%s",string);
    for(int i=0;i<=20;i++){
        if(string[i]==0){
          length++;
        }
    }
    printf("Length of string is: %d\n",20-length);
    return 0;
}
