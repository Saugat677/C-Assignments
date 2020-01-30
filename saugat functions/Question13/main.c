#include <stdlib.h>
#include <stdio.h>
#include<time.h>
// this will allow different sequence in each run
int main(){
srand(time(NULL));//    srand(time(NULL));
for(int i = 0; i < 50; i++)
printf("%d\n",rand()%2);//printf("%d\n",rand());
}
//rand() is giving required number of random numbers of same sequence if executed without any
//condition or starting points.
