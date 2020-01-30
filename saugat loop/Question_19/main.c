#include <stdio.h>

int main()
{
    int number,boolean=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(int i=2;i<=number/2;i++){
        if(number%i==0){
            boolean=1;
        }
    }
    if(number==0 || number==1){
        printf("Neither prime nor composite\n");
    }
    else if(boolean==1){
        printf("Give number is composite\n");
    }else{
        printf("Given number is prime\n");
    }
    return 0;
}
