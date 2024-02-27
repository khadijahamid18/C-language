#include <stdio.h>
int main()
{
    system("cls");
    float radius, diameter, area, circumference;

    printf("Please enter the radius of circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;

    printf("\nThe diameter of circle is: %f", diameter);

    area = 3.14 * (radius * radius);

    printf("\nThe area of circle is: %f", area);

    circumference = 2 * 3.14 * radius;

    printf("\nThe circumference of circle is: %f", circumference);

    return 0;
}