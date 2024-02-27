 #include <stdio.h>
int main()
{
    system("cls");
    float length1, length2, width1, width2, area1, area2;
    printf("Please enter the length of first rectangle: ");
    scanf("%f", &length1);
    printf("\nPlease enter the width of first rectangle: "); 
    scanf("%f", &width1);

    area1 = length1 * width1;

    printf("\nPlease enter the length of second rectangle: ");
    scanf("%f", &length2);
    printf("\nPlease enter the width of second rectangle: "); 
    scanf("%f", &width2);

    area2 = length2 * width2;

    if (area1 > area2)
    {
        printf("Area of rectangle 1 is greater then rectangle 2");
    }
    else
    {
        printf("Area of rectangle 2 is greater then rectangle 1");
    }
    return 0;
}