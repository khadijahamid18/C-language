#include <stdio.h>
int main()
{
    system("cls");
    float radius1, radius2, area1, area2;
    printf("Enter radius 1 :  ");
    scanf("%f", &radius1);

    printf("Enter radius 2 :  ");
    scanf("%f", &radius2);

    area1 = 3.14 * radius1 * radius1;
    printf("Area of circle 1 : %f ", area1);

    area2 = 3.14 * radius2 * radius2;
    printf("\nArea of circle 2 : %f ", area2);

    if (area1 > area2)
    {
        printf("\nArea of cirlce 1 is greater then area 2");
    }
    else
    {
        printf("\nArea of cirlce 2 is greater then area 1");
    }

    return 0;
}