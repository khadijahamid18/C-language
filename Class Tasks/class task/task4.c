#include <stdio.h>
int main()
{
    system("cls");
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);

    if ((character >= '0') && (character <= '9'))
    {
        printf("The number is a digit");
    }
    else if ((character >= 'A') && (character <= 'Z'))
    {
        printf("This is Upper Case");
    }
    else if ((character >= 'a') && (character <= 'z'))
    {
        printf("This is Lower Case");
    }

    return 0;
}