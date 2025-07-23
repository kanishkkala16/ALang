#include <stdio.h>

int main()
{

    int n;

    printf("Enter the value of n \n");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("The value of i is %d now \n", i);
    }
    return 0;
}