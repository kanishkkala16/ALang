# include<stdio.h> 

int main()
{
    int x=69;
    int *y;
    int **z;
    y = &x;
    z = &y;

    printf("The address of x is %u \n", &x);
    printf("The address of y is %u \n", &y);
    printf("The address of z is %u \n", &z);// this willl sure short return the value of i.e. the address of the y variable;
    printf("The value of y or address of x is %d \n", *z);// this willl sure short return the value of i.e. the address of the x variable;
    printf("The value of x is %d \n", **z);// this willl sure short return the value of value of x stored in the y variable;
    return 0;
}