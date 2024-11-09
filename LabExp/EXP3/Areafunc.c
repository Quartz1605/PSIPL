#include<stdio.h>
#include<math.h>
int area(int ,int ,int );

void main()
{
	
	int side1,side2,side3;
	printf("Enter the sides of triangle");
	scanf("%d %d %d",&side1,&side2,&side3);
	area(side1,side2,side3);
}
int area(int num1,int num2,int num3)
{
	float area1;
	float S;
	
	S = (num1 + num2 + num3)/2;
	area1 = sqrt(S*(S-num1)*(S-num2)*(S-num3));
	
	printf("Area is %f",area1);
	return 0;
	
}
