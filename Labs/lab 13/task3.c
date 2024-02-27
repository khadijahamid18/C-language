// writing to a file
#include <stdio.h>
int main()
{
    system("cls");
    FILE *cptr = NULL;
    if ((cptr = fopen("client.txt", "w")) == NULL)
    {
        printf("File could not be opened!\n");
    }
    else
    {
        int account;
        char name[30];
        double balance = 0.0;

        int i = 1;
        while (i <= 3)
        {
            printf("Please enter the account number, name and balance: ");
            scanf("%d %29s %lf\n", &account, name, &balance); 
        }
        fprintf(cptr, " %d %s %.2f\n ", account, name, balance);
        i++;
    }
    fclose(cptr);

    return 0;
}