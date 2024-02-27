#include <stdio.h>
struct Complex
{
    float real;
    float img;
};

int main()
{
    system("cls");
    struct Complex c1, c2, add, sub;
    scanf("%f", &c1.real);
    scanf("%f", &c1.img);
    scanf("%f", &c2.real);
    scanf("%f", &c2.img);

    add.real = c1.real + c2.real;
    add.img = c1.img + c2.img;
    printf("Sum = %f + %f ", add.real + add.img);

    sub.real = c1.real - c2.real;
    sub.real = c1.real - c2.real;
    printf("Subtraction = %f - %f ", sub.real + sub.img);

    if (c1.real == c2.real && c1.img == c2.img)
    {
        printf("Both are equal");
    }
    else
    {
        printf("Both are not equal");
    }

    if (c1.real > c2.real && c1.img > c2.img)
    {
        printf("c1 > c2");
    }
    else
    {
        printf("c1 < c2");
    }

    return 0;
}