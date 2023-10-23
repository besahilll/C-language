// Write a function to reverse the elements of an array
#include <stdio.h>
// function definition
void reversearray(int arr[], int n);
int main()
{
    int arr[6];
    // accepting the input from the user
    for (int i = 0; i < 6; i++)
    {
        printf("%d index is :", i);
        scanf("%d", &arr[i]);
    }
    reversearray(arr, 6);

    return 0;
}
// function definition
void reversearray(int arr[], int n)
{
    printf("Printing the elements of array in reverse order\n");
    for (int i = n; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}
