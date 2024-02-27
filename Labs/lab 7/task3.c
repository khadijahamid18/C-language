#include <stdio.h>
int convertDays(int year, int month, int day)
{
    int date;
    date = year * 10000 + month * 100 + day; 
}
int main()
{
    system("cls");
    int month, year, day, date;
    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the day: ");
    scanf("%d", &day);

    date = convertDays(year, month, day);

    printf("Date :  %d", date);

    return 0;
}