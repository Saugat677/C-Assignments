#include <stdio.h>
#include<string.h>
int main()
{
    char string1[20]={},string2[20]={};
    int compare=0;
    printf("Enter two string: ");
    scanf("%s %s",string1,string2);
    compare=strcmp(string1,string2);
    if(compare==1){
        printf("%s is in higher lexicographic order.\n",string1);
    }else if(compare==-1){
        printf("%s is in higher lexicographic order.\n",string2);
    }else{
        printf("Both %s and %s are in same lexicographic order.\n",string1,string2);
    }
    return 0;
}
