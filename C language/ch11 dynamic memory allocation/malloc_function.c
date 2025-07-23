# include<stdio.h> 
# include<stdlib.h> 

int main()
{
    float *ptr;

    // printf("The size of int on my pc is %d \n", sizeof(int));
    // printf("The size of float on my pc is %d \n", sizeof(float));
    // printf("The size of char on my pc is %d \n", sizeof(char));

    ptr = (float*)malloc(7* sizeof(float));
    //malloc function saves n number of memory blocks(seven in this case) of a datatype, float in this case 
    for(int i=0; i<7; i++){
        printf("Enter the value of the %d character :  \n", i+1);
        scanf("%f", &ptr[i]);
    }

    for(int i=0; i<7; i++){
        printf("The value of the %d character is : %0.02f \n", i+1, ptr[i]);
    }

    return 0;
}
