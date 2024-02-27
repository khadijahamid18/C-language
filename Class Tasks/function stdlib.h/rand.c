#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int i, n;
    int t; 
    n = 5;
    /* Intializes random number generator */
    srand((unsigned)time(&t));

    /* Print 5 random numbers from 0 to 49 */
    for (i = 0; i < n; i++)
    {
        printf("Random Digits: %d\n", rand() % 50);
    }

    return (0);
}