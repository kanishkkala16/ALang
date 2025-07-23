#include <stdio.h>

int main()
{
    // 97-122 = a-z
    // 65-90  = A-Z
    char character;
    printf("Enter the character \n");
    scanf("%c", &character);

    if (character <= 122 && character >= 97)
    {
        printf("The character %c is in lowercase \n", character);
        
    }

    if (character <= 90 && character >= 65)
    {
        printf("The character %c is in uppercase \n", character);
    }

    else
    {
        printf("The character %c is a symbol \n", character);
    }
    return 0;
}