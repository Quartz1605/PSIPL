#include<stdio.h>
int main()
{
    int a,b,a1,b1,lcm,gcd;
    printf("Enter two number.");
    scanf("%d %d",&a,&b);
    
    a1=a;
    b1=b;
    while(b1>0)
    {
        int temp = b1;
        b1 = a1%b1;
        a1=temp;
    
    }
    gcd = a1;

    lcm = (a*b)/gcd;

    printf("Gcd is %d and lcm is %d",gcd,lcm);


}