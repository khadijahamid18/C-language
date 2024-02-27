// problem statement: find the average of the student in a class
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    system("cls");
    int *iptr1, *iptr2;
    int size;
    printf("Please enter the number of students: ");
    scanf("%d", &size);
    // iptr1 = (int*)calloc(10, sizeof(int));
    iptr1 = (int *)malloc(size * sizeof(int));
    if (iptr1 == NULL)
    {
        return 0;
    }
    iptr2 = iptr1;
    for (int i = 0; i < size; i++)
    {
        printf("Please enter the age of student %d: ", i + 1);
        scanf("%d", &(*iptr1));
        //
        iptr1++; // use of pointer arithmatic
    }
    // display the entered data
    printf("\nEntered ages are: "); 
    int sum = 0;
    int avg = 0;
    iptr1 = iptr2;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *iptr1;
        printf("\n%d", *iptr1);
        iptr1++; // use of pointer arithmatic
    }
    printf("\nsum = %d", sum);
    avg = sum / size;
    printf("\nAverage age of students is %d", avg);
    // free the dynamic allocated memory
    free(iptr2);
    iptr1 = NULL;
    iptr2 = NULL;
    return 0;
}
