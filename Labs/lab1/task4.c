// dozen
#include <stdio.h>
int main()
{
    system("cls");
    int eggs;
    int dozen;
    int extra;
    printf("Enter number of eggs in dozen: ");
    scanf("%d", &eggs);
    dozen = eggs / 12;
    printf("Number of dozen eggs: ");
    printf("%d", dozen);
    printf("\n");
    extra = eggs % 12;
    printf("Number of extra eggs: ");
    printf("%d", extra);

    return 0;
}