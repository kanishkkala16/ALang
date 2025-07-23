# include<stdio.h> 

int main()
{
    int num;
    int num2;
    FILE *ptr;
    ptr = fopen("kanishk.txt" , "r");

    fscanf(ptr, "%d", &num );
    fscanf(ptr, "%d", &num2 );

    fclose(ptr);// closing an already open file above is a good practise;

    printf("The value of num is : %d \n", num);
    printf("The value of num2 is : %d \n", num2);

    return 0;
}