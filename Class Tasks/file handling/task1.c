#include <stdio.h>
//#include<conio.h>
// writes one charactr at at time to a file
int main()
{
    system("cls");
    FILE *cfptr = NULL;                             // create a cfptr act as the stream
    if ((cfptr = fopen("client.txt", "w")) == NULL) // establish relationship between our program and file
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
            printf("Please enter the account number, name and balance \n");
            scanf("%d%29s%lf", &account, name, &balance);
            fprintf(cfptr, "%d %s %.2f\n", account, name, balance); // writing on the file
            i++;
        }
    }
    fclose(cfptr); // disconnect the relation between our program and file
}