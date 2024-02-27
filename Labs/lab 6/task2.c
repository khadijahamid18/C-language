#include <stdio.h>

int main()
{
    system("cls");

    int length = getLength();
    int width = getWidth();
    int area = calculateArea(length, width);
    displayArea(area);

    return 0;
}
int isValid(int num, int start, int end)
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
int getLength()
{
    int length;
    printf("Please enter the length of rectangle: ");
    scanf("%d", &length);
    while (!isValid(length, 5, 500))
    {
        printf("Please enter the length of rectangle: ");
        scanf("%d", &length);
    }
    return length;
}
int getWidth()
{
    int width;
    printf("Please enter the width of rectangle: ");
    scanf("%d", &width);
    while (!isValid(width, 8, 200))
    {
        printf("Please enter the width of rectangle: ");
        scanf("%d", &width);
    }
    return width;
}
int calculateArea(int length, int width)
{
    int area;
    area = length * width;
    // printf("%d", area);
    return area;
}
void displayArea(int area)
{
    printf("Area of rectangle: %d", area);
}