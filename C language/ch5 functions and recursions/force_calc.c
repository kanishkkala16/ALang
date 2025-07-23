# include<stdio.h> 

float force(float mass);

int main()
{   
    float f;

    printf("Enter the value of mass in kilograms\n");
    scanf("%f", &f);

    printf("The value of  force is %.2f N \n", force(f) );
    return 0;
}
float force(float  mass)
{
    float y;
    y = mass * 9.8;
    return y;
}