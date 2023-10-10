// WAP to print fibonacci sequence using recurssive function.
////a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers.
#include <stdio.h>

// function declaration
void printfibonacci(int num);
int main()
{
    int num; // num->no. of elements of fibonacci sequence
    // Accepting the input from the user
    printf("Enter the number of elements:");
    scanf("%d", &num);
    printf("Printing fibonacci series:");
    printf("%d, %d,", 0, 1);
    printfibonacci(num - 2); //(num-2)->as two numbers are already printed

    return 0;
}
// function definition
void printfibonacci(int num)
{
    static int n1 = 0, n2 = 1, n3;
    if (num > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d,", n3);
        printfibonacci(num - 1);
    }
}
