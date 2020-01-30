#include <stdio.h>
#include<math.h>
#define pi 22/7.0
int main()
{
    int userInput,boolean=0;
    do{
        printf("1.Square.\n");
        printf("2.Triangle.\n");
        printf("3.Circle.\n");
        printf("4.Quit.\n");
        scanf("%d",&userInput);
        if(userInput==1){
            int length;
            printf("Enter length of square.\n");
            scanf("%d",&length);
            printf("Area of Square is %d\n",length*length);
        }if(userInput==2){
            int side1,side2,side3;
            float semi;
            printf("Enter three sides of triangle.\n");
            scanf("%d %d %d",&side1,&side2,&side3);
            semi=(side1+side2+side3)/2.0;
            printf("Area is %f.\n",sqrt(semi*(semi-side1)*(semi-side2)*(semi-side3)));
        }if(userInput==3){
            int radius;
            printf("Enter radius.\n");
        scanf("%d",&radius);
        printf("Area of circle is %f.\n",pi*radius*radius);
        }
        if(userInput==4){
            boolean=1;
        }
    }while(boolean==0);
    return 0;
}
