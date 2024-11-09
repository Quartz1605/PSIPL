#include<stdio.h>
int main()
{
   int foot;
   float meter;
   printf("Enter foot value") ;
   scanf("%d",&foot);

   meter = foot*0.3048;
   printf("meter value is %f",meter);
   return  0;
}