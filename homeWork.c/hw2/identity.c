#include <stdio.h>

int main()
{
    system("cls");
    int a[10][10];
    int i = 0, j = 0, row = 0, col = 0;

    printf("Enter the order of the matrix (mxn):\n");
    printf("where m = number of rows; and\n");
    printf(" and  n = number of columns\n");
    scanf("%d %d", &row, &col);
    // flag is to detect any change
    int flag = 0;

    printf("Enter the elements of the matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            // i == j means to check if it is a diagonal matrix bcz
            // identity matrix should be diagonal or square matrix first
            if (i == j && a[i][j] != 1)
            {
                flag = 1; // if diagnol matrix is not 1 then return -1 bcz it should be 1
                break;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 1; // diagonal matrix should be 0
                break;
            }
        }
    }

    if (flag == 0) // means no change in flag
    {
        printf("It is a IDENTITY MATRIX\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("It is NOT an identity matrix\n");
    }

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     system("cls");
//     int rows = 3, cols = 3;
//     int a[3][3];
//     printf("\n 3*3 Identity matrix is\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (i == j)
//             {
//                 printf("1\t");
//             }
//             else 
//             {
//                 printf("0\t");
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }