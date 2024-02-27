// positive numbers count
#include <stdio.h>
int main()
{
    system("cls");
    int size[100] = {0};
    int i = 0, input = 0;

    do
    {
        printf("Enter any positive number (-1 for ending of input): ");
        scanf("%d", &input);
        if (input != -1)
        {
            size[i] = input;
        }
        i++;
    } while (input != -1 && i < 100);
    printf("Total positive numbers are %d ", i - 1);

    return 0;
}