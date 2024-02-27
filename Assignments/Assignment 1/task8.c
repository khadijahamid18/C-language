#include <stdio.h>
int main()
{
    system("cls");
    char character;
    char ch = 'y';

    do
    {
        printf("Enter a character: ");
        scanf("%c", &character);
        getchar();

        if ((character >= '0') && (character <= '9'))
        {
            printf("The number is a digit!");
        }
        else if ((character >= 'A') && (character <= 'Z'))
        {
            printf("This is Upper Case!");
        }
        else if ((character >= 'a') && (character <= 'z'))
        {
            printf("This is Lower Case!"); 
        }
        // else
        // {
        //     printf("It is some other character!");
        // }

        printf("\nDo you want to enter again (Y/N): ");
        scanf("%c", &ch);
        getchar();
    } while (ch == 'y');

    return 0;
}