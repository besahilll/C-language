// WAP to print the elements of array using arrays as function argument
#include <stdio.h>
// function declaration
void printarray(int arr[], int n);
int main()
{
    int arr[6];
    // input
    for (int i = 0; i < 6; i++)
    {
        printf("%d index is:", i);
        scanf("%d", &arr[i]);
    }
    printarray(arr, 6);

    return 0;
}
// function definition
void printarray(int arr[], int n)
{
    printf("Printing the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}
