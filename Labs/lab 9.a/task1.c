 #include <stdio.h>
int compare(char n1[], char n2[])
{
    for (int i = 0; i < n1; i++)
    {
        if (n1[i] == n2[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    system("cls");
    char name1[3];
    char name2[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter character %d of array 1: ", i);
        scanf("%c", &name1[i]);
        getchar();
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter character %d of array 2: ", i);
        scanf("%c", &name2[i]);
        getchar();
    }
    printf("\n");
    if ((compare(name1, name2)) == 1)
    {
        printf("Identical");
    }
    else
    {
        printf("Not Identical");
    }
    return 0;
}