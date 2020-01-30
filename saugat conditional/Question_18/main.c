#include <stdio.h>

int main()
{
    int units,consumerID;
    char name[50];
    printf("Enter consumer id: ");
    scanf("%d",&consumerID);
    printf("Enter consumer name: ");
    scanf("%s",name);
    printf("Enter units consumed: ");
    scanf("%d",&units);
    if(units<=199){
        printf("Your total amount is %.2f\n",units*1.20);
    }else  if(units<400){
        printf("Your total amount is %.2f\n",units*1.50);
    }else  if(units<600){
        printf("Your total amount is %.2f\n",units*1.80);
    }else{
        printf("Your total amount is %.2f\n",units*2.0);
    }
    return 0;
}
