// TIC-TAC-TOE Game 2D array
#include <stdio.h>
#include <Windows.h>
#define SIZE 3
void intializeWithStars(char *array);
void display(char *array);
void playGame(char array[SIZE][SIZE]);
int anyChoiceLeft(char *array);
void getChoice(char *str, int *x, int *y);
int isChoiceValid(char array[SIZE][SIZE], int *x, int *y);
int decisionMaking(char array[SIZE][SIZE]);
int main()
{
    system("cls");
    char array[SIZE][SIZE];
    char *ptr = *array;

    intializeWithStars(ptr);

    display(ptr);

    // Game Starting

    printf("\t\t|************* Game is Started *************|\n\n");
    playGame(array);

    return 0;
}
void intializeWithStars(char *array)
{
    for (int i = 0; i < SIZE * SIZE; i++)
    {
        *array = '*';
        array++;
    }
}
void display(char *array)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    printf("\n");
    for (int i = 1; i <= SIZE * SIZE; i++)
    {
        printf("\t%c", *array);
        array++;
        if (i % SIZE == 0 && i != 0)
            printf("\n");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}
int anyChoiceLeft(char *array)
{
    for (int i = 0; i < SIZE * SIZE; i++)
    {
        if (*array == '*')
        {
            return 1;
        }
        else
            array++;
    }
    return 0;
}
void playGame(char array[SIZE][SIZE])
{
    char *p = *array;
    int xp1, yp1, xp2, yp2, decision, flagTie;
    xp1 = yp1 = xp2 = yp2 = decision = 0;
    flagTie = 1;
    do
    {
        do
        {
            getChoice("Player1", &xp1, &yp1);
            if (isChoiceValid(array, &xp1, &yp1))
                printf("Invalid Choice ! ");
        } while (isChoiceValid(array, &xp1, &yp1));
        array[xp1][yp1] = 'X';
        display(p);
        decision = decisionMaking(array);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
        if (decision == 1)
        {
            printf("\nPlayer 1 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 1 ---------->\n\n");
            flagTie = 0;
            break;
        }
        else if (decision == 2)
        {
            printf("\nPlayer 2 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 2 ---------->\n\n");
            flagTie = 0;
            break;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
        if (anyChoiceLeft(p) != 1)
            break;

        do
        {
            getChoice("Player2", &xp1, &yp1);
            if (isChoiceValid(array, &xp1, &yp1))
                printf("Invalid Choice ! ");
        } while (isChoiceValid(array, &xp1, &yp1));
        array[xp1][yp1] = 'O';
        display(p);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
        decision = decisionMaking(array);
        if (decision == 1)
        {
            printf("\nPlayer 1 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 1 ---------->\n\n");
            flagTie = 0;
            break;
        }
        else if (decision == 2)
        {
            printf("\nPlayer 2 Win the Game ! \n\n\t<---------- CONGRATULATIONS PLAYER 2 ---------->\n\n");
            flagTie = 0;
            break;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
        if (anyChoiceLeft(p) != 1)
            break;
    } while (1);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    if (flagTie == 1)
    {
        printf("\nBoth Player played well ! \n\n\t<---------- Match Tied --------->\n\n");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
}
void getChoice(char *str, int *x, int *y)
{
    do
    {
        printf("%s enter row number : ", str);
        scanf("%d", x);
        if (*x > SIZE || *x < 1)
            printf("Invalid Input ! ");
    } while (*x > SIZE || *x < 1);
    do
    {
        printf("%s enter column number : ", str);
        scanf("%d", y);
        if (*y > SIZE || *y < 1)
            printf("Invalid Input ! ");
    } while (*y > SIZE || *y < 1);
    *x = *x - 1;
    *y = *y - 1;
}
int isChoiceValid(char array[SIZE][SIZE], int *x, int *y)
{
    if (array[*x][*y] == '*')
        return 0;
    else
        return 1;
}
int decisionMaking(char array[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i][0] == array[i][1] && array[i][0] == array[i][2])
        {
            if (array[i][0] == 'X' && array[i][1] == 'X' && array[i][2] == 'X')
                return 1;
            if (array[i][0] == 'O' && array[i][1] == 'O' && array[i][2] == 'O')
                return 2;
        }
    }
    // checking if column elements are equal
    for (int i = 0; i < SIZE; i++)
    {
        if (array[0][i] == array[1][i] && array[0][i] == array[2][i])
        {
            if (array[0][i] == 'X' && array[1][i] == 'X' && array[2][i] == 'X ')
                return 1;
            if (array[0][i] == 'O' && array[1][i] == 'O' && array[2][i] == 'O')
                return 2;
        }
    }
    // checking digonals
    if (array[0][0] == array[1][1] && array[0][0] == array[2][2])
    {
        if (array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X')
            return 1;
        if (array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O')
            return 2;
    }
    if (array[0][2] == array[1][1] && array[0][2] == array[2][0])
    {
        if (array[0][2] == 'X' && array[1][1] == 'X' && array[2][0] == 'X')
            return 1;
        if (array[0][2] == 'O' && array[1][1] == 'O' && array[2][0] == 'O')
            return 2;
    }
    return 3;
}