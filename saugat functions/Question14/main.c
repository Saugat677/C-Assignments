#include <stdio.h>
int max_Of_Array(int,int[]);
int main()
{
    int number;
    printf("Enter the number of data you want. ");
    scanf("%d",&number);
    int array[number];
    printf("Enter values of array: \n");
            for(int i=0;i<number;i++){
        scanf("%d",&array[i]);
    }
            printf("Maximum element of array is %d.\n",max_Of_Array(number,array));
    return 0;
}
int max_Of_Array(int num,int arr[]){
    int max=arr[0];
    for(int i=0;i<num;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
