//Codes by Vrinda Agrawal.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter choice (1/2): \n"); //Taking input from the user about which task to perform.
    scanf("%d",&n);
    if(n==1)
    {
        int a[6][6],b[6][6],s[6][6];
        printf("Enter a 6x6 matrix: ");
        for (int i=0;i<6;i++)
        {
            for (int j=0;j<6;j++)
                {
                    scanf("%d",&a[i][j]);
                }
        }
        printf("Enter another 6x6 matrix: ");
        for (int i=0;i<6;i++)
        {
            for (int j=0;j<6;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Subtraction of both: "); //Subtraction of two matrices.
        for (int i=0;i<6;i++)
        {
            for (int j=0;j<6;j++)
            {
                s[i][j]=a[i][j]-b[i][j];
            }
        }
        for (int i=0;i<6;i++)
        {
            for (int j=0;j<6;j++)
            {
                printf("%d",s[i][j]);
            }
        }
    }
    else if(n==2)
    {
        int a[4][4], b[16], k=0;
        printf("Enter elements of 4x4 matrix: ");
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                scanf("%d",&a[i][j]);        
            }
        }
       
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++) // Performing the sorting of matrices.
            {
                b[k]=a[i][j];
                k++;
            }
        }
        int t=0;
        for(int j=0;j<16;j++)
        {
            for(int i=0;i<15;i++)
            {
                if(b[i]>b[i+1])
                {
                    t=b[i];
                    b[i]=b[i+1];
                    b[i+1]=t;
                }
            }
        }
        printf("Sorted elements of the matrix are: \n");
        k=0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                printf("%d ",b[k]);
                k++;
            }
            printf("\n");
        }
    }
    else
        printf("Invalid input, Try again \n");
}
