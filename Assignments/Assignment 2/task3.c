#include <stdio.h>
int main()
{
    system("cls");
    int height, width;
    do
    {
        printf("PLease enter the height of rectangle: ");
        scanf("%d", &height);
        if ((height <= 3) || (height % 2 == 0))
        {
            printf("Invalid Number!\n");
            printf("PLease enter the height of rectangle again: ");
            scanf("%d", &height);
        }
    } while ((height <= 3) && (height % 2 == 0));

    do
    {
        printf("PLease enter the width of rectangle: ");
        scanf("%d", &width);
        if ((width <= 5) || (width % 2 == 0))
        {
            printf("Invalid Number!\n");
            printf("PLease enter the width of rectangle again: ");
            scanf("%d", &width);
        }
    } while ((width <= 5) && (width % 2 == 0));

    // i for rows and j for coloum
    // height = rows & width = coloum

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if ((i % 2 != 0) && (j % 2 != 0))
            {
                printf("   ");
            }
            else
            {
                printf(" + ");
            }
        }
        printf("\n");
    }

    return 0;
}