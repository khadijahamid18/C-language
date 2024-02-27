// area of circle and rectangle
#include <stdio.h>
int main()
{
    system("cls");
    int radius;
    int areac;
    int rec, len, wid, arear;
    printf("take radius from user: ");
    scanf("%d", &radius);
    areac = 3.14 * radius * radius;
    printf("Area of circle:  ");
    printf("%d", areac);

    printf("\n");
    printf("take length from user: ");
    scanf("%d", &len);
    printf("take width from user: ");
    scanf("%d", &wid);
    arear = len * wid;
    printf("Area of rectangle:  ");
    printf("%d", arear);

    return 0;
}