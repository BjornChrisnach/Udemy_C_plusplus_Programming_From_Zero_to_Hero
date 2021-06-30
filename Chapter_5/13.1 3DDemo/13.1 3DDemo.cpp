// Demonstrating a 3-Dim Array in C Language
// Program to read and print values entered by the user
#include <stdio.h>
int main()
{
    int dim[2][3][2];
    printf("Enter values: \n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                printf("Enter dim[%d][%d][%d] value....",i,j,k);
                scanf("%d", &dim[i][j][k]);
            }
        }
    }
    // Printing values with proper index.
    printf("\nDisplaying values:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                printf("3-Dim[%d][%d][%d] = %d\n", i, j, k, dim[i][j][k]);
            }
        }
    }
    return 0;
}
