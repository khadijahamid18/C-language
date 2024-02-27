#include <stdio.h>
int main()
{
    system("cls");
    for (int base = 1; base < 200; base++)
    {
        for (int perpendicular = base + 1; perpendicular < 200; perpendicular++)
        {
            for (int hypotaneous = perpendicular + 1; hypotaneous < 200; hypotaneous++)
            {
                if (((base * base) + (perpendicular * perpendicular)) == (hypotaneous * hypotaneous))
                {
                    printf("(%d %d %d)\n", base, perpendicular, hypotaneous);
                }
            }
        }
    }

    return 0;
}

 