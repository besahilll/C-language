// Write a function to calculate the sum,product & average of 2 numbers. Print that average in the main function
#include <stdio.h>
// function declaration
void calculation(int num1, int num2, int *sum, int *pro, int *avg);
int main()
{
    int num1, num2, sum, pro, avg;
    printf("Enter the two numbers:");
    scanf("%d%d", &num1, &num2);
    calculation(num1, num2, &sum, &pro, &avg); // calling function
    printf("Sum is %d, product is %d, average is %d", sum, pro, avg);

    return 0;
}
// function definition
void calculation(int num1, int num2, int *sum, int *pro, int *avg)
{
    *sum = num1 + num2;
    *pro = num1 * num2;
    *avg = (num1 + num2) / 2;
}
