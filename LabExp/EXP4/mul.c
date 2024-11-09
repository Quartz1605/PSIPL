#include<stdio.h>

void main()
{
	int arr[10];

	
	printf("Enter 10 numbers");
	for(int i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<10;i++)
	{ arr[i] = arr[i]*3;
	}
	
	for(int i=0;i<10;i++)
	{
	printf("%d\n",arr[i]);

}
printf("UID : 2024800010");
}