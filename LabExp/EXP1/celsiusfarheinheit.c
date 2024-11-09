#include<stdio.h>
int main()
{ 
    int cel;
    float fah;

    printf("Enter celsius value");
    scanf("%d",&cel);

    fah = (cel*9/5)+32;

    printf("fahrenheit value is %.2f\n",fah);

    return 0;
}