# include<stdio.h> 

typedef struct complex_numbers{
    int real;
    int imaginary;
}comp;

void display(comp c){
    printf("The value of real part of the complex number is : %d \n", c.real);
    printf("The value of imaginary part of the complex number is : %d \n", c.imaginary);
}

int main()
{   comp cnum[5];

    for(int i=0; i<5; i++){
        printf("Enter the value of real part of the complex number : %d \n", i+1);
        scanf("%d", &cnum[i].real);

        printf("Enter the value of real part of the complex number : %d \n", i+1);
        scanf("%d", &cnum[i].imaginary);
    }

    for(int i=0; i<5; i++){
        display(cnum[i]);
    }
    
    return 0;
}