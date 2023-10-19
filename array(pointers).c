// WAP to traverse the elements of array using  pointers
#include <stdio.h>

int main()
{
    int arr[5];
    // input
    int *ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf(" %d index is: ", i);
        scanf("%d", (ptr + i));
    }

    // ouput
    for (int i = 0; i < 5; i++)
    {
        printf("%d index is %d\n", i, *(ptr + i));
    }

    return 0;
}
