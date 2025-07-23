# include<stdio.h> 

float temperature(float celsius);

int main()
{   float x;

    printf("Enter the temperature in celsius\n");
    scanf("%f", &x );

    printf("The temperature in fahrenheit would be %f", temperature(x) );
    return 0;
}

float temperature(float celsius){
    float f;
    f= celsius*9/5 +32;
    return f;


}


    