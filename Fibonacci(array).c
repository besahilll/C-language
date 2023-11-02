// WAP to store first n fibonacci numbers.
#include <stdio.h>

int main()
{
    int n;
    // accepting the input from the user
    printf("Enter the number upto which you want fibonacci series (n>2):");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t %d\t", 0, 1);

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf(" %d \t", fib[i]);
    }

    return 0;
}
