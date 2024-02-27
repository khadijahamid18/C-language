#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define SIZE 100
int main()
{ 
    system("cls");
    FILE *file = fopen("task.txt", "w");
    if (file == NULL)
    {
        printf("Sorry! The file is not found!!!");
    }
    int arr[SIZE];
    int i = 0;
    while (i < SIZE)
    {
        arr[i] = i;
        fwrite(&arr[i], sizeof(arr[i]), 1, file);
        i++;
    }
    
    fclose(file);

    return 0;
}