#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
int main()
{
    system("cls");
    FILE *cfptr = fopen("mixData.txt", "r");
    char buffer[MAX_LEN];
    double salary;
    double totalSalary = 0.0;
    while (fgets(buffer, MAX_LEN, cfptr) != 0)
    {
        printf("%s", buffer);
        strtok(buffer, " ");
        strtok(NULL, " ");
        char *str1 = strtok(NULL, " ");
        salary = atof(str1);
        totalSalary += salary;
    }
    printf("\nTotalSalary %.2lf\n", totalSalary);
    fclose(cfptr);
}
