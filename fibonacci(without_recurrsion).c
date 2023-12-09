// WAP to print fibonacci sequence without using function.
////a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers.
#include <stdio.h>

int main()
{
    int num, n1 = 0, n2 = 1, n3; // num-> no. of elements you want to print.
    // accepting the input from the user
    printf("Enter the number of elements:");
    scanf("%d", &num);
    printf("Printing fibonacci series:");
    printf("%d, %d, ", 0,1);

    for (int i = 2; i < num; i++)
    { // loop starts from 2 because 0 and 1 are already printed
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d,", n3);
    }
    return 0;
}
