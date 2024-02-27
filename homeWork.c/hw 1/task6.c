// age in minutes
#include <stdio.h>
int main()
{
    system("cls");
    float driven, kmpl, liters;
    printf("Please enter number of kilometers driven: ");
    scanf("%f", &driven);
    printf("Please enter liters of petrol used: ");
    scanf("%f", &liters);
    kmpl = driven / liters;
    printf("KMPL of the car 162: ");
    printf("%f", kmpl);

    return 0;
}
