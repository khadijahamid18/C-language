#define SIZE 30
void input(char src1[], int size) 
{
    int i = 0;
    printf("Please enter your name: ");
    scanf("%s", &src1);
    char ch = getchar();
    while (ch != 10)
    {
        src1[i] = ch;
        ch = getchar();
        i++;
    }
    src1[i] = '\0';
}
int main()
{
    system("cls");
    char a[10] ;
    input(a, 10);
    return 0;
}