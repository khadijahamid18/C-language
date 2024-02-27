#include <stdio.h>
int main()
{
    // create a cfptr
    FILE *cfptr = NULL; 
    // establish connection b/w program and file
    cfptr = fopen("demoFile1.txt", "w");
    // writing on File
    fprintf(cfptr, "%s", "Welcome to FCIT");
    // disconnect the relation between our program and file
    fclose(cfptr);
    return 0;
}