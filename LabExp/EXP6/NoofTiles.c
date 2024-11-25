#include<stdio.h>
int tile(int,int);
int main()
{
int l,b;
printf("Enter dimensions of Rectangle ");
scanf("%d %d",&l,&b);
printf("No. of square tiles requires are %d",tile(l,b));
return 0;
}
int tile(int l, int b)
{
if(l<=0 || b<=0)
{
return 0;
}
int maxsize = 1;
while (maxsize <=l && maxsize <=b)
{
maxsize*=2;
}
maxsize/=2;
return(1+tile(l-maxsize,b)+tile(maxsize,b-maxsize));
}
