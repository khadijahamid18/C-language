#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float calculateCharges(float hrs)
{
    float minutesHrs = 3, additionalHrs, charge = 2.0;
    if (hrs <= 3)
    {
        charge = 2.0;
    }
    else if (hrs > 3 && hrs < 24)
    {
        additionalHrs = hrs - minutesHrs;
        for (int i = 1; i <= additionalHrs; i++)
        {
            charge = charge + 0.5;
        }
    }
    else if (hrs == 24)
    {
        charge = 10;
    }

    return charge;
}
int main()
{
    system("cls");
    float hrs1, hrs2, hrs3, charge1, charge2, charge3, totalCharge, totalHrs;
    printf("Enter the hours of Car 1 :");
    scanf_s("%f", &hrs1);
    printf("Enter the hours of Car 2 :");
    scanf_s("%f", &hrs2);
    printf("Enter the hours of Car 3 :");
    scanf_s("%f", &hrs3);
    charge1 = calculateCharges(hrs1);
    printf("\ncharge for car 1 is : %.2f", charge1);
    charge2 = calculateCharges(hrs2);
    printf("\ncharge for car 2 is : %.2f", charge2);
    charge3 = calculateCharges(hrs3);
    printf("\ncharge for car 3 is : %.2f", charge3);
    totalHrs = hrs1 + hrs2 + hrs3;
    totalCharge = charge1 + charge2 + charge3;
    printf("\nCar           Hours               Charge\n");
    printf("1               %.1f                %.1f\n", hrs1, charge1);
    printf("2               %.1f                %.1f\n", hrs2, charge2);
    printf("3               %.1f               %.1f\n", hrs3, charge3);
    printf("Total           %.1f               %.1f\n", totalHrs, totalCharge);
    return 0;
}

