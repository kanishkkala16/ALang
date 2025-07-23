#include <stdio.h>

int main()
{
    int i = 0, n, skip = 4;
    printf("Enter the number \n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            skip = 30;
            break;
        }
    }

    if (skip == 30 && n != 2)
    {
        printf("%d is not a prime number", n);
    }

    else
    {
        printf("%d is a prime number", n);
    }

    return 0;
}