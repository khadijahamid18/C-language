    #include <stdio.h>
    int main()
    {
        system("cls");
        int dif, num, term;
        int i = 0;
        printf("Enter any number as first term: ");
        scanf("%d", &num);

        printf("Enter the common difference: ");
        scanf("%d", &dif);

        printf("Enter the number of terms: ");
        scanf("%d", &term);
        while (i < term)
        {
            printf("%d\n", num);
            num = num + dif;
            i++;
        }

        return 0;
    }