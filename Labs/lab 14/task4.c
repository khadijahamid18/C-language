#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    system("cls");
    FILE *file = fopen("input.txt", "r"); 
    if (file == NULL)
    {
        printf("Sorry! The file is not found!!!");
    }
    else
    {
        fseek(file, +1, SEEK_END);
        printf("%d\n", ftell(file));
        fseek(file, -1, SEEK_SET);
        printf("%d", ftell(file));
    }
    fclose(file);

    return 0;
}