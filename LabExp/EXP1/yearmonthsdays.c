#include<stdio.h>
int main()
{
  int days,years,months,remdays;
  printf("Enter number of days");
  scanf("%d",&days);
  years = days/365;
  months = (days%365)/30;
  remdays = (days%365)%30;

  printf("Year is %d\n",years);
  printf("month is %d\n",months);
  printf("new days are %d\n",remdays);
  return 0;  

}  