// WAP to sum first ten natural numbers using for loop and do while loop
#include <stdio.h>

int main()
{
    int i=1,sum = 0, n = 10;
    //do{
    //    sum+=i;
    //    i++;
    //} while(i<=n);
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("So the sum of first 10 natural numbers is :%d", sum);
    return 0;
}
