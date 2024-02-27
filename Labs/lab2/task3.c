#include <stdio.h>
int main()
{
    system("cls");
    int sec, min;

    printf("Enter seconds: ");
    scanf("%d", &sec);

    printf("Its equivale to\n");

    min = sec / 60;
    sec = sec % 60;

    printf("Minutes: %d", min);
    printf("\nSeconds: %d", sec);

    return 0;
}