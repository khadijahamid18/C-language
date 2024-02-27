#include <stdio.h>
#define PI 3.1415926
int isValid(double num, double start, double end)
{
    if (num >= start && num <= end)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int getRadius()
{
    int radius;
    printf("Enter any radius in range between 10.0 to 50.0: ");
    scanf("%d", &radius);

    while (!isValid(radius, 10.0, 50.0))
    {
        printf("Invalid input!!!\nPlease enter the radius again : ");
        scanf("%d", &radius);
    }
    return radius;
}

void calculateArea(int radius, double *area)
{
    *area = PI * radius * radius;
}

void displayArea(double area)
{
    printf("The area is for the given radius of circle is : %lf", area);
}

int main()
{
    system("cls");
    int radius;
    double area;
    radius = getRadius();
    calculateArea(radius, &area);
    displayArea(area);
    return 0;
}