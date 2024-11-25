#include<stdio.h>
int fact(int);
int sum(int);
int fibonacci(int);
int natural(int);
int main()
{
int n,s;
printf("Enter no. of Task to be executed ");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Enter any 5 digit number ");
scanf("%d",&n);
printf("Sum of digits is %d",sum(n));
break;
case 2:
printf("Enter any Number ");
scanf("%d",&n);
printf("Factorial is %d",fact(n));
break;
case 3:
printf("Fibonacci series is \n");
for(int i=1;i<=25;i++)
{
printf("%d \t ",fibonacci(i));
}
break;
case 4:
printf("Sum of first 25 natural numbers is"
"%d",natural(1));
break;
default: printf("Inavlid Input ");
}
return 0;
}
int sum(int n)
{
if(n==0)
{
return 0;
}
else
{
int rem,s;
rem=n%10;
s=rem + sum(n/10);
return(s);
}
}
int fact(int n)
{
if(n==0)
{
return 1;
}
else
{
return(n*fact(n-1));
}
}
int fibonacci(int b)
{
if (b == 0) {
return 0;
} else if (b == 1) {
return 1;
} else {
return(fibonacci(b - 1) + fibonacci(b - 2));
}
}
int natural(int k)
{
int sum;
if(k==25)
{
return sum+25;
}
else
{
sum=k+natural(k+1);
return sum;
}
}
