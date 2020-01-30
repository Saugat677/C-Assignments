#include <stdio.h>

int main()
{
int userInput,element=0;
printf("No of values?: ");
scanf("%d",&userInput);
int num[userInput];
for(int i=0;i<userInput;i++){
scanf("%d",&num[i]);
}
for(int i=0;i<userInput;i++){
 for(int j=i;j<userInput;j++){
if(num[i]==num[j]){
            ++element;
}
}
 if(element==1){
     printf("%d ",num[i]);
 }
 element=0;
}
    return 0;
}
