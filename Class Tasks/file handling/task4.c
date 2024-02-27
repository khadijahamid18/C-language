#include <stdio.h>
int main()
{
    system("cls");
    // create a cfptr act as the stream
    FILE *cfptr = NULL;
    // establish relationship between our program and file
    cfptr = fopen("client1.txt", "w");
    if (cfptr == NULL) 
    {
        printf("File could not be opened!\n");
    }
    else
    {
        fscanf(cfptr, "%s", cfptr);
        printf("%s ", cfptr);
        fscanf(cfptr, "%s", cfptr);
        printf("%s ", cfptr);
        fscanf(cfptr, "%s", cfptr);
        printf("%s ", cfptr);
    }
    fclose(cfptr); // disconnect the relationship between our program and file
}   
