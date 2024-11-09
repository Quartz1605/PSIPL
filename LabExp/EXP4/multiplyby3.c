#include<stdio.h>
void main()
{
    int arr[10],k;
    for(int i =0;i<10;i++)
      {
        printf("enter a number\n");
        scanf("%d",&arr[i]);
      }
    
    for(int j =0;j<10;j++)
        {
            arr[j]*3;
        }

    for (int k = 0;k<10;k++);
        {
            printf("%d\n",arr[k]);
        }
}