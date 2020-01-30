#include <stdio.h>

int main()
{
    char string1[20]={},string2[20]={};
    int compare=0;
    printf("Enter two string: ");
    scanf("%s %s",string1,string2);
    for(int i=0;i<20;i++){
     if(string1[i]>string2[i]){
         ++compare;
         printf("%s is in higher lexicographic order.\n",string1);
         break;
     }   else if(string2[i]>string1[i]){
         --compare;
         printf("%s is in higher lexicographic order.\n",string2);
         break;
     }
    }
    if(compare==0){
        printf("Both %s and %s are in same lexicographic order.\n",string1,string2);
    }
    return 0;
}
