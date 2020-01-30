#include <stdio.h>

int main()
{
int m;
printf("Enter a number\n");
scanf("%d",&m);
if(m>0){
 printf("1\n");
}else if(m<0){
 printf("-1\n");
}else{
 printf("0\n");
}
    return 0;
}
