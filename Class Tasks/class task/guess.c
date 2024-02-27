#include <stdio.h>
int main()
{
    system("cls");
    int tryNum = 1;
    int maxTry = 5;
    char guess;
    do
    {
        printf("Please enter the your guess: (a-z): ");
        scanf("%c", &guess);
        getchar(); // ignore the \n key
        if (guess == 'z')
        {
            printf("Congratulations, your guess is correct");
            tryNum = 6;
        }
        else
        {
            tryNum = tryNum + 1;
        }
    } while (tryNum <= 5);
    // } while (tryNum <= 5 && guess != 'z');
    // char guess;
    // int tryNum = 1;
    // int maxTry = 1;
    // do
    // {
    //     printf("Please enter your guess: ");
    //     scanf("%c", &guess);
    //     getchar();
    //     if (guess == 'c' || guess == 'C')
    //     {
    //         printf("Congratulations\n");
    //     }
    //     else
    //     {
    //         tryNum++;
    //     }

    // } while (tryNum < 5 && (guess != 'c' || guess != 'C'));
    // if (tryNum < 5)
    // {
    //     printf("You Failed");
    // }

    return 0;
}