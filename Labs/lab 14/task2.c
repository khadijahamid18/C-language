#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    FILE *file;
    int ft, i = 0;
    file = fopen("abc.txt", "r");
    if (file == NULL)
    {
        printf("The file is not find!!!");
        return 0;
    }
    fseek(file, 0, SEEK_END);
    ft = ftell(file);
    while (i < ft)
    {
        i++;
        fseek(file, -i, SEEK_END);
        printf("%c", fgetc(file));
    }
    fclose(file);
    return 0;
}