#include <stdio.h>
int main()
{
    system("cls");
    char grade;
    char x;
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    for (int i = 0; grade != 'x'; i++)
    {
        printf("Enter the grades of students(A-F): ", i + 1);
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
        case 'F':
        case 'f':
            f++;
            break;
            // case 'x':
            // case 'X':
            //     break;

        default:
            printf("Invalid Character");
            break;
        }
    }
    printf("\nNumber of students securing A grades are: %d", a);
    printf("\nNumber of students securing B grades are: %d", b);
    printf("\nNumber of students securing C grades are: %d", c);
    printf("\nNumber of students securing D grades are: %d", d);
    printf("\nNumber of students securing F grades are: %d", f);

    return 0;
}
