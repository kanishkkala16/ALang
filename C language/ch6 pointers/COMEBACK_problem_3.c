# include<stdio.h> 

void multiplier(int *hy);

int main()
{
    int hy;
    hy = 9;
    printf("The value of hy is %d \n", hy);
    multiplier(&hy);
    printf("The value of hy after running the function is %d \n", hy);

    return 0;
}

void multiplier(int *hy){
    int x;
    x = *hy  *  9;
}