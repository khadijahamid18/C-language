// sorting the arrays in ascending order (largest to smallest)
#include <stdio.h>
int main()
{
    system("cls");
    int a[5], temp = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter first array: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The numbers arranged in ascending order are \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}