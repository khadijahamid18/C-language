#include <stdio.h>
int main()
{
    char str[30];
    // reading from demo1.txt file
    FILE *cfptr = fopen("demo1.txt", "r");
    fscanf(cfptr, "%s", str);
    printf("%s ", str);
    fscanf(cfptr, "%s", str);
    printf("%s ", str);
    fscanf(cfptr, "%s", str);
    printf("%s ", str);
    fclose(cfptr);
    return 0;
}
