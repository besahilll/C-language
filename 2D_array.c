// Create a 2D array, storing the tables of 2 &3.
#include <stdio.h>
// funcion declaration
void storetable(int tables[][10], int n, int m, int number); // n-> no. of rows in 2d array , m->no. of columns in 2d Array
int main()
{
    int tables[2][10];
    storetable(tables, 0, 10, 2);
    storetable(tables, 1, 10, 3);

    // output
    for (int i = 0; i < 10; i++)
    { // prints table of 2
        printf("%d\t", tables[0][i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    { // prints table of 3
        printf("%d\t", tables[1][i]);
    }
    return 0;
}
// function definition
void storetable(int tables[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    { // 0 to 10
        tables[n][i] = number * (i + 1);
    }
}
