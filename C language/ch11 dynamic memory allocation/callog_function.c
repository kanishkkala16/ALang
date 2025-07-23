# include<stdio.h> 
# include<stdlib.h> 

int main()
{
    float *ptr;

    // printf("The size of int on my pc is %d \n", sizeof(int));
    // printf("The size of float on my pc is %d \n", sizeof(float));
    // printf("The size of char on my pc is %d \n", sizeof(char));

    ptr = (float*)calloc(7,  sizeof(float));
    //calloc funtion saves n number of blocks(seven in this case) for the particular datatype(float in the above case)
    //In any case, no value is entered in the variables then all the variables are initialized as zero;
    for(int i=0; i<7; i++){
        printf("Enter the value of the %d character :  \n", i+1);
        scanf("%f", &ptr[i]);
    }
    //format the above written loop and run the program once and you willl notice that all the values of n floats are initialized as 0

    for(int i=0; i<7; i++){
        printf("The value of the %d character is : %0.02f \n", i+1, ptr[i]);
    }

    return 0;
}
