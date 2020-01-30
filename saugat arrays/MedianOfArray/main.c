#include <stdio.h>

int main()
{
    int arrayLength,index,temp;
    float median;
            printf("No of Data?");
    scanf("%d",&arrayLength);
    int array[arrayLength];
    for(int i=0;i<arrayLength;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<arrayLength;i++){
        for(int j=i+1;j<arrayLength;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    if(arrayLength%2!=0){
        printf("Median is %d\n",array[(arrayLength)/2]);
    }else{
        index=arrayLength/2;
        median=(float)(array[index-1]+array[index])/2;
        printf("Median is %0.1f\n",median);
    }
    return 0;
}
