#include <stdio.h>

int main()
{
    int variable1=0,variable2=1,temp=0;
    for(int i=0;i<20;i++){
        printf("%d\t",variable1);
        temp=variable1;
        variable1=variable2;
variable2=variable2+temp;
    }
    printf("\n");
    return 0;
}
