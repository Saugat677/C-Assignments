#include <stdio.h>

int main()
{
    int count=0;
   for(int i=2;i<1000;i++){
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==0){
        printf("%d is prime\n",i);
    }
    count=0;
   }
    return 0;
}
