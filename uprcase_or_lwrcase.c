// WAP to determine whether a charcter is uppercase or lowercase
#include <stdio.h>

int main()
{
    // a-z -> 97-122 and //A-Z -> 65-90
    char ch; // ch->character
    printf("Enter the character:");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("The character is uppercase");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("The character is lowercase");
    }
    else
    {
        printf("The input given by the user is not a character");
    }

    return 0;
}
