#include<stdio.h>
int A(int m, int n);
int main()
{
printf("Ackerman series for the given range is \n");
for(int i=1;i<5;i++)
{
for(int j=1;j<11;j++)
{
printf("%d \t",A(i,j));
}
printf("\n");
}
return 0;
}
int A(int m, int n)
{
int i,j;
if(m==0)
{
return(n+1);
}
else if(m!=0 && n==0)
{
return(A(m-1,1));
}
else if(m!=0 && n!=0)
{
return(A(m-1,A(m,n-1)));
}
return 0;
}
