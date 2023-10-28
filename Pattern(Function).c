/*Write a program using functions to print the following pattern (first n lines)
 *
 ***
 *****/
#include <stdio.h>
void pattern(int n);
int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
/*1->1
2->3
3->5
4->7*/
void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    pattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}
