// newton's law
#define _ CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    system("cls");
    double force;
    float m1, m2, dis;
    float cons = (6.67e-11);
    printf("Please enter mass of first body in kgs: ");
    scanf("%f", &m1);
    printf("Please enter mass of second body in kgs: ");
    scanf("%f", &m2);
    printf("Please enter distance between two bodies in meters: ");
    scanf("%f", &dis);
    force = (cons * m1 * m2) / (dis * dis);
    printf("The Gravitational force between two bodies = %.14f ", force);
    printf("Newton");

    return 0;
}
