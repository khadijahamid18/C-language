#include <stdio.h>
int main()
{
    system("cls");
    int books;
    printf("Enter the number of books: ");
    scanf("%d", &books);

    if (books == 0)
    {
        printf("He or She earns 0 points.");
    }
    else if (books == 1)
    {
        printf("He or She earns 5 points.");
    }
    else if (books == 2)
    {
        printf("He or She earns 15 points.");
    }
    else if (books >= 3) 
    {
        printf("He or She earns 30 points.");
    }
    else
    {
        printf("Invalid Number");
    }

    return 0;
}