#define MAX 5
#define LEN 40
int length(const char *n)
{
    int i = 0;
    while (*n != '\0')
    {
        i++;
        n++;
    }
    return i;
}
int compare(const char *l, const char *n)
{
    int l1 = length(l);
    int l2 = length(n);
    // printf("%s %d\n", l, l1);
    // printf("%s %d\n", n, l2);
    int size = 0;
    if (l1 < l2)
    {
        return 0;
    }
    else if (l1 > l2)
    {
        return 0;
    }
    else
    {
        int flag = 1;
        for (int i = 0; i < l1; i++)
        {
            if (*l != *n)
            {
                flag = 0;
                break;
            }
            n++;
            l++;
        }
        if (flag == 1)
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
    char name[LEN];
    // char list[MAX][LEN] = {"Ahmad", "Ali", "Ammar", "Moosa", "Raza"};
    char list[MAX][LEN] = {"BITF21M513", "BITF21M510", "BITF21M535", "BITF21M554", "BITF21M511"};
    printf("Please enter the student ID: "); 
    scanf("%s", name);
    int eq;
    int flag = 0;
    for (int i = 0; i < MAX; i++)
    {
        eq = compare(*(list + i), name);
        if (eq == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%s is the legal student", name);
    // printf("Yes enter name is our empolyee");
    else
        printf("Sorry %s is not in the legal student", name);
}