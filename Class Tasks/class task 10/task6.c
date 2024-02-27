#include <stdio.h>
int main()
{
    system("cls");
    char grade;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < 15; i++)
    {
        printf("Enter the grades of students(A-D): ", i + 1);
        scanf("%c", &grade);
        getchar();

        switch (grade)
        {
        case 'A':
        case 'a':
            a++;
            break;
        case 'B':
        case 'b':
            b++;
            break;
        case 'C':
        case 'c':
            c++;
            break;
        case 'D':
        case 'd':
            d++;
            break;

        default:
            printf("Invalid Character");
            break;
        }
    }

    printf("Number of students securing A grades are: %d", a);

    return 0;
}
