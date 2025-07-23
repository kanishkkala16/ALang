# include<stdio.h> 
# include<stdlib.h> 

int main()
{
    int *ptr;
    int n;


    // printf("The size of int on my pc is %d \n", sizeof(int));
    // printf("The size of float on my pc is %d \n", sizeof(float));
    // printf("The size of char on my pc is %d \n", sizeof(char));

    printf("Enter the number of integers you want\n");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));
    
    for(int i=0; i<n; i++){
        printf("Enter the value of the %d character :  \n", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("The value of the %d character is : %d \n", i+1, ptr[i]);
    }

    free(ptr);
    

    return 0;
}
