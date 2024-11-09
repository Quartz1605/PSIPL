#include<stdio.h>
int main()
{
    int sal;
    float hra,ta,da,gross;
    printf("Enter basic salary");
    scanf("%d",&sal);

    hra = 0.2*sal;
    ta = 0.15*sal;
    da = 0.9*sal;
    gross = hra+ta+da+sal;

    printf("Gross salary is %f",gross);
    return 0;
}