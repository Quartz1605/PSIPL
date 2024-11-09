#include<stdio.h>
#include<math.h>
int Z(int,int);
int R(int,int,int,int);
int A(int ,int,int,int,int);
int X(int);
void main()
{
    int alpha ;
    printf("Enter equation to work on.");
    scanf("%d",&alpha);

    if(alpha==1)
    {
        int x,y,result;
        printf("Enter x and y");
        scanf("%d %d",&x,&y);
        result = Z(x,y);
        printf("%d",result);
    }
    else if(alpha==2)
    {
        int v,c,d,g,result2;
        printf("Enter v,c,d,g");
        scanf("%d %d %d %d",&v,&c,&d,&g);
        result2 = R(v,c,d,g);
        printf("%d",result2);
    }
    else if(alpha==3)
    {
        int a,b,c,x,y,result3;
        printf("Enter a,b,c,x,y");
        scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
        result3 = A(a,b,c,x,y);
        printf("%d",result3);
    }
    else if(alpha==4)
    {
        int x,result4;
        printf("Enter x");
        scanf("%d",&x);
        result4 = X(x);
        printf("%d",result4);
        
        }


    else{
        printf("Enter valid equation number.");

    }
}
int Z(int x,int y)
{
    int result1;
    result1 = ((x+3)*pow(x,3))/((y-4)*(y-5));
    return result1;
}

int R(int v,int c,int d,int g)
{

    int result2;
    result2 = (2*v + 6.22*(c+d))/g+v;
    return result2;
}

int A(int a,int b,int c,int x,int y)
{
    int result;
    result = (7.7*b*(x*y+a)/c-0.8+2*b)/(x+a)*(1/y);
    return result;
}

int X(int x)
{
    int result;
    result = (12*pow(x,3)/4*x) + (8*pow(x,2)/4*x) + (x/8*x) + 1/x;
    return result;
}
