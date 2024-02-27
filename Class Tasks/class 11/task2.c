#include <stdio.h>
int main()
{
    system("cls");
    int multi[5][10];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            *(*(multi + i - 1) + j - 1) = i * j; // multi[i][j] = i * j;
        }
    }
    printf("Output using pointer notation: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d, ", *(*(multi + i) + j)); // multi[i][j] = i * j;
        }
        printf("\n");
    }
    printf("Output using pointer variable to show that 2D array is store in row major order in memory\n ");
    //just show that array is store as row major order in memory
    int *ptr = *multi; // ptr is int and multi is also pointer to int
    // both are compatible with each other
    for (int j = 0; j < 10 * 5; j++)
    {
        if (j % 10 == 0)
        printf("\n"); 
        printf("%d, ", *ptr);
        ptr++;
    }


    return 0;
}