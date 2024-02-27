#include <stdio.h>
int main()
{
    system("cls");
    int height, width;
    do
    {
        printf("PLease enter the height of rectangle: ");
        scanf("%d", &height);
        if ((height < 4) || (height % 2 != 0))
        {
            printf("Invalid Number!\n");
            printf("PLease enter the height of rectangle again: ");
            scanf("%d", &height);
        }
    } while ((height < 4) || (height % 2 != 0));

    do
    {
        printf("PLease enter the width of rectangle: ");
        scanf("%d", &width);
        if ((width < 6) || (width % 2 != 0))
        {
            printf("Invalid Number!\n");
            printf("PLease enter the width of rectangle again: ");
            scanf("%d", &width);
        }
    } while ((width < 6) || (width % 2 != 0));

    // i for rows and j for coloum
    // height = rows & width = coloum

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (i == 1 || i == height || j == 1 || j == width)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}