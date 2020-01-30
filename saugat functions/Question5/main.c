#include <stdio.h>
int triangleValidity(int a,int b,int c);
int main()
{
    int number,number2,number3;
    printf("Enter sides of triangle:\n");
    scanf("%d %d %d",&number,&number2,&number3);
    if(triangleValidity(number,number2,number3)){
        printf("It is a valid triangle.\n");
    }else{
        printf("It is not a valid triangle.\n");
    }
    return 0;
}
int triangleValidity(int a,int b,int c){
    if((a+b)>c && (a+c)>b && (b+c)>a){
        return 1;
    }else {
        return 0;
}
}
