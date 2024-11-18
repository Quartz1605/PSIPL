//Codes by Vrinda Agrawal.
#include<stdio.h>
void main()
{
   int a[3][5], b[3][5];
   int s[3][5];
   printf("Enter elements for 1st 3x5 matrix:"); //Taking in first matrix
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<5;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   printf("Enter elements for 2st 3x5 matrix:"); //Taking in second matrix
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<5;j++)
      {
         scanf("%d",&b[i][j]);
      }
   }
   printf("Sum of both the matrix is: \n");// adding both matrixes and storing them in a new matrix.
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<5;j++)
      {
         s[i][j]=a[i][j]+b[i][j];
         printf("%d ",s[i][j]);  //Printing both matrixes
      }
      printf("\n");
   }
}



