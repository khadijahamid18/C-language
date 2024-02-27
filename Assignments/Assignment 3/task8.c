#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
int main()
{
    system("cls");
    // STRINGS TO FLOATS AND THEIR SUM
    printf("STRING TO FLOATS AND THEIR SUM:\n\n");
    char array1[SIZE];
    printf("Enter string 1 of floating points: ");
    gets(array1);

    char array2[SIZE];
    printf("Enter string 2 of floating points: ");
    gets(array2);

    char array3[SIZE];
    printf("Enter string 3 of floating points: ");
    gets(array3);

    char array4[SIZE];
    printf("Enter string 4 of floating points: ");
    gets(array4);

    printf("\n");

    float sumFloat = atof(array1) + atof(array2) + atof(array3) + atof(array4);
    printf("The sum of all four floating point strings after conversion is: %f\n", sumFloat);
    return 0;
}