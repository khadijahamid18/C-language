// reverse the array
#include <stdio.h>
#define N 5
int main()
{
    system("cls");
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        printf("Enter array elements: ",N); 
        scanf("%d", &arr[i]);
    }
    // printf("\nThe original array is: \n");
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    printf("The reverse of given array is: \n");
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}