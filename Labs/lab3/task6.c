#include <stdio.h>
int main()
{
    system("cls");
    int length1, length2, length3;
    printf("Enter the length of one side of the triangle: ");
    scanf("%d", &length1);

    printf("Enter the length of second side of the triangle: ");
    scanf("%d", &length2);

    printf("Enter the length of third side of the triangle: ");
    scanf("%d", &length3);

    if (length1 * length1 == (length2 * length2) + (length3 * length3))
    {
        printf("This is the right triangle");
    }
    else
    {
        printf("This is not the right triangle");
    }

    return 0;
}