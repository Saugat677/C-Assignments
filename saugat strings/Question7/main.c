#include <stdio.h>

int main()
{
    char string[20]={};
    int length=0;
    int alphabet=0,number=0,character=0;
    printf("Enter a string: ");
    scanf("%s",string);
    for(int i=0;i<=20;i++){
        if(string[i]==0){
          length++;
        }
    }
    for(int i=0;i<(20-length);i++){
        if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122)){
           alphabet++;
        }else if(string[i]>=48 && string[i]<=57){
            number++;
        }else{
            character++;
        }
    }
    printf("There are %d aplhabets , %d digits , %d special character in above string.\n",alphabet,number,character);
    return 0;
}
