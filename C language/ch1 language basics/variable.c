#include <stdio.h>

int main()
{
    int a = 4;
    // int a = 8.5 is not recommended cause 8.5 is a float not an int
    float b = 8.6;
    char c = 'o';
    int d = 68;
    int f = 78 +23;
    printf("The value of a is %d, %d \n", a, a);
    printf("The value of b is %f, %f \n", b, b, b);
    printf("The value of c is %c, %c \n", c, c);
    printf("The sum of a and d is %d \n", a + d);
    printf("The value of e is %d \n", f);

    return 0;
}
