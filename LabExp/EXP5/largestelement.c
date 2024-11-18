//Codes by Vrinda Agrawal.
#include <stdio.h>
int main()
{
    int a[3][3],l,s=0,s1,s2,s3;
    printf("Enter 3x3 matrix: "); //Taking in 3*3 matrix.
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);        
        }
    }
    l=a[0][0];  //Finding the largest number in matrix.
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]>l)
                l=a[i][j];
        }
    }
    s=a[0][0]+a[1][1]+a[2][2]; //Sum of diagonal elements.
    s1=a[0][0]+a[0][1]+a[0][2]; // Sum of first row elements.

    s2=a[1][0]+a[1][1]+a[1][2];// Sum of second row elements.
    s3=a[2][0]+a[2][1]+a[2][2];// Sum of third row elements.
    printf("Largest number of matrix is: %d\n",l);
    printf("Sum of diagonal elements of matrix is: %d\n",s);
    if(a[0][1]==a[1][0] && a[0][2]==a[2][0] && a[1][2]==a[2][1])
        printf("It is a symmetric matrix\n");
    else
        printf("It is not a symmetric matrix\n");
    printf("Sum of first row elements of matrix is: %d\n",s1);
    printf("Sum of second row elements of matrix is: %d\n",s2);
    printf("Sum of third row elements of matrix is: %d\n",s3);
}
