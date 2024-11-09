#include<stdio.h>
#include<math.h>
void main()
{
    int num1,num2,j,sum1=0,sum2=0;
    printf("Enter two numbers.\n");
    scanf("%d %d",&num1,&num2);

    for(int i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
           sum1=sum1+i; 
        }
    }
    printf("%d\n",sum1);
    
    for(int j=1;j<num2;j++)
    {
        if(num2%j==0)
        {
           sum2=sum2+j;
           
        }
    }
    
    
    if(sum1==num2 && sum2==num1)
    {
        printf("They are amicable.");
    }
    else
    {
        printf("They are not amicable.");
    }
}