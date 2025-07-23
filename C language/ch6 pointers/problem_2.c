# include<stdio.h> 


void print_bablu_or_address( int i){
    printf("The address of i is %u\n", &i);
}
int main()
{
    int i = 4;
    printf("The address of i is %u\n", &i);
    print_bablu_or_address(i);

    return 0;
}
//conclusion is that both the addresses would not be same.
//because the i in the void function is different from the i in the  main function
