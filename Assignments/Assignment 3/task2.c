#include <stdio.h>
int removeNegatives(int arr[], int size, int *newSize);
int main()
{
    system("cls");
    int num;
    int newSize;
    int array[] = {10, -1, -2, 7, 15, 6, -8, 5, 7, 9, 6, -8, 14, -67, -54, 25, -58, 44};

    // Finding the size of an array
    num = sizeof(array) / sizeof(array[0]);
    printf("Previous Size of the array is : %d\n", num);
    printf("\n\n");

    // printing complete Array
    printf("Elements in an array are : \n {");
    for (int i = 0; i < num; i++)
    {
        printf("%6d", *(array + i));
    }
    printf("  }");

    // function calling to count and remove negative elements from the array
    removeNegatives(array, num, &newSize);

    return 0;
}
int removeNegatives(int arr[], int size, int *newSize)
{

    int counter = 0;
    int location = 1;
    // count number of negative elements
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < 0)
        {
            counter++;
        }
    }
    printf("\n\n");
    // assignment of count to the newsize pointer of main
    *newSize = counter;
    printf("\nTotal negative integer in an array are :%3d", *newSize);
    printf("\n");                                                          
    // remove negative integer from an arrays
    printf("\nArray after removing negative integer : \n{");
    for (int i = 0; i < size - counter; i++)
    {
        int temp = 0;
        if (*(arr + i) > 0)
        {
            printf("%5d\t", arr[i]); // printing of positive integer
        }
        else
        {
            temp = *(arr + i); // swaping
            *(arr + i) = *(arr + location);
            *(arr + location) = temp;
            location++;
            i--;
        }
    }

    printf("   }");
}