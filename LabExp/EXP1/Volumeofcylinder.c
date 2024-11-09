#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{ 
    int r,h;
    float vol,area,vol1,area2;
    printf("Enter value of radius and height");
    scanf("%d %d",&r,&h);

    vol = PI*pow(r,2)*h;
    area = 2*PI*r*(r+h);
    printf("Volume of cylinder is %f\n",vol);
    printf("Area of cylinder is %f\n",area);
    return 0;
    
   
}