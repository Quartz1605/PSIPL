#include<stdio.h>
int main()
{
    int num1,num2,add,sub,div,multi,mod;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    
    add = num1 + num2;
    sub = num1 - num2;
    div = num1/num2;
    multi = num1*num2;
    mod = num1%num2;

    printf("Addition is %d\n",add);
    printf("Subtraction is %d\n",sub);
    printf("Division is %d\n",div);
    printf("Multiplication is %d\n",multi);
    printf("Modulo is %d\n",mod);

    return 0;
}
