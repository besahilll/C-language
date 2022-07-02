// Write a fuction that prints Namaste if user is Indian and Bonjour if user is French.
#include <stdio.h>

void Namaste();
void Bonjour();
int main()
{
    char ch;
    printf("Enter i for Indian and f for french");
    scanf("%c", &ch);

    if (ch == 'i')
    {
        Namaste();
    }
    else if (ch == 'f')
    {
        Bonjour();
    }
    else
    {
        printf("Enter the valid character");
    }
    return 0;
}

void Namaste()
{
    printf("Namaste");
}
void Bonjour()
{
    printf("Bonjour");
}
