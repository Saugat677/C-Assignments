#include <stdio.h>

int main()
{
int x_coordinate,y_coordinate;
printf("Enter x and y coordinate \n");
scanf("%d %d",&x_coordinate,&y_coordinate);
if(x_coordinate>0 && y_coordinate>0){
    printf("This point %d,%d lies in first quadrant\n",x_coordinate,y_coordinate);
}else if(x_coordinate<0 && y_coordinate>0){
    printf("This point %d,%d lies in second quadrant\n",x_coordinate,y_coordinate);
}else if(x_coordinate>0 && y_coordinate<0){
    printf("This point %d,%d lies in fourth quadrant\n",x_coordinate,y_coordinate);
}else if(x_coordinate<0 && y_coordinate<0){
    printf("This point %d,%d lies in third quadrant\n",x_coordinate,y_coordinate);
}
return 0;
}
