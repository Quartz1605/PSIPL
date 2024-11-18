//Codes by Vrinda Agrawal.
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3];
    printf("Enter elements of 3x3 matrix A:\n"); //Taking in 3*3 matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of another 3x3 matrix B:\n");  //Taking in 3*3 matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) // Initializing all the C array elements to zero.
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)     //Performing the dot product.
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Result of matrix multiplication is:\n"); //Print the ouput array.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
