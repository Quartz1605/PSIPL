#include<stdio.h>
#include<math.h>
int main()
{
    int count=0,num,ognum,rem,result=0;
    printf("Enter a number\n");
    scanf("%d",&ognum);

    
    while(num!=0)
    {
        ognum = num;
        num=num/10;
        count++;
        
    }
    
    for(int i=1;i<=count;i++)
    {
        rem = ognum%10;
        result = result + pow(rem,count);


    }

    


    
    if (result==num){
        printf("Armstrong");
    }
    else{
        printf("Not an Armstrong");
    }
    
    return 0;


}