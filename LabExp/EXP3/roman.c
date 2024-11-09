#include<stdio.h>
int roman(int,int,char);
void main()
{   int yr;
    printf("Enter year");
    scanf("%d",&yr);
    yr = roman(yr,1000,'d');
    yr = roman(yr,500,'i');
    yr = roman(yr,100,'c');
    yr = roman(yr,50,'l');
    yr = roman(yr,10,'x');
    yr = roman(yr,5,'v');
    roman(yr,1,'i');
}
int roman(int year,int a, char z)
{
    int j,k;
    for(int i=1;i<=j;i++)
    {
        j = year/a;
        k = year%a;
        
        printf("%c",z);
    }
    return k;

}

