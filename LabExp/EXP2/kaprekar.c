#include<stdio.h>
#include<math.h>
void main()
{
    int num,sqr,num1,count=0; 
    printf("Enter a number to check.\n");
    scanf("%d",&num);

    num1 = num;
    sqr = pow(num,2);
    
    
    //Khudse se likha hai bc
    
    while(num1>0)
    {
        num1 = num1/10;
        count++;
    }
    
    

    int division,div3,rem3,result4;
    division = pow(10,count);
    div3 = num/division;
    rem3 = num%division;

    result4 = div3+rem3;
    
    
    
    if(result4==num)
    {printf("Kaprekar");}
    else{
        printf("Not a Kaprekar number.");
    }


}