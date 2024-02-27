#include <stdio.h>
#include <ctype.h>
int main()
{
    system("cls");
    char c;
    int i = 0, lc = 0, uc = 0, dig = 0, ws = 0, pun = 0, oth = 0;
    printf("Please enter a character string and then press ENTER: ");
    // Analyse text as it is input:
    while ((c = getchar()) != '\n')
    {
        if (islower(c))
            lc++;
        else if (isupper(c))
            uc++;
        else if (isdigit(c))
            dig++;
        else if (isspace(c))
            ws++;
        else if (ispunct(c))
            pun++;
        else
            oth++;
    }
    // display the counts of different types of characters
    printf("You typed: \n");
    printf("lower case letters = %d\n", lc);
    printf("upper casae letters = %d\n", uc);
    printf("digits = %d\n", dig);
    printf("white space = %d\n", ws);
    printf("punctuation = %d\n", pun);
    printf("others = %d\n", oth);
    return 0;
}