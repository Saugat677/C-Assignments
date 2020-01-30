#include <stdio.h>

int main()
{
    int array[9];
    for(int i=0;i<9;i++){
        array[i]=i+1;
    }
    for(int i=0;i<9;i++){
        printf("%d\t",array[i]);
    }
    return 0;
}
