#include<stdio.h>
#include<math.h>

int factorial(int);
int add(int);

void main()
{
	int num,fact,result;
	printf("Enter a number.");
	scanf("%d",&num);
	result = add(num);
	printf("%d",result);
}

int factorial(int a)
{
	int num1 = 1;a = a-1;
	while(a!=0){
	num1 = a*num1;
	a-- ;
	}
	
	return num1;
}

int add(int num2)
{
	int result,result1=0;
	for(int i = 1;i<=num2;i++)
	{
		result = factorial(i);
		result1 = result + result1;
		
		
	}
	return result1;
}
