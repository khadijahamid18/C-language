#include <stdio.h>
int convertTime(int seconds, int *hours, int *minutes, int *second)
{
    *hours = seconds / 3600;
    seconds = seconds % 3600;
    *minutes = seconds / 60;
    seconds = seconds % 60;
    *second = seconds;
    return hours, minutes, second;
}
int main()
{
    system("cls");
    int seconds, hours, minutes, second, timeConverter;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    timeConverter = convertTime(seconds, &hours, &minutes, &second);

    printf("Time in seconds = %d hours, %d minutes, %d seconds", hours, minutes, second);

    return 0;
}