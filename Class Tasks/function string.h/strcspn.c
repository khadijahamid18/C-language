// C code to demonstrate the working of
// strcspn()
#include <stdio.h>
#include <string.h>

int main()
{
    system("cls");
    int size;

    // initializing strings
    char str1[] = "geeksforgeeks";
    char str2[] = "ffc";

    // using strcspn() to calculate initial chars
    // before 1st matching chars.
    // returns 3
    size = strcspn(str1, str2);

    printf("The unmatched characters before first matched character : %d\n", size);
}
