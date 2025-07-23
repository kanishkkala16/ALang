# include<stdio.h> 

int main()
{
    // int a = 46;
    // int *j = &a;
    // printf("the address of i is %u \n", j);
    // j++;
    // printf("the address of i is %u \n", j);
    // j = j + 1;
    // printf("the address of i is %u \n", j);
    // j = j + 2;
    // printf("the address of i is %u \n", j);
    // an integer is of 4 bytes so it will increment by 4 bytes per addition or vice versa(decrementation)
    // a float is of 4 bytes too.
    //THIS STUFF IS CALLED POINTER ARITHMETIC;
    //THE ADDRESS

    char a = 'Y';
    char *j = &a;
    printf("the address of i is %u \n", j);
    j++;
    printf("the address of i is %u \n", j);
    j = j + 1;
    printf("the address of i is %u \n", j);
    j = j + 2;
    printf("the address of i is %u \n", j);
    // a character is of 1 byte hence the value of pointer j in this case will increment by 1 byte only 
    return 0;
}