#include <stdio.h>

int main()
{
    char string[200]={},search[200]={};
    int compare=0,length=0,searchlen=0,change=0;
    printf("Enter a string: ");
    gets(string);
    printf("Enter a sub-string to search: ");
    gets(search);
    for(int i=0;i<=20;i++){
        if(string[i]!=0){
            length++;
        }
    }
    for(int i=0;i<=20;i++){
        if(search[i]!=0){
            searchlen++;
        }
    }
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(i==0){
            if(search[i]==string[j]){
                compare++;
                change=j;
            }
            }else{
                if(search[i]==string[change+1]){
                    compare++;
                    change++;
                }
            }
        }
    }
    if(compare>=searchlen){
        printf("%s is present in %s\n",search,string);
    }
    return 0;
}
