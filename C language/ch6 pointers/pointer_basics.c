# include<stdio.h> 

int main()
{
    

    int i=77;
    int *j = &i;
    printf("The value of i is %d \n",i);
    printf("The value of i is %d \n", *j);// this means return value(*) of j

    printf("The address of i is %u \n", &i);// this means value of address(&) of i

    printf("The address of i is %u \n", j);// this means value of address of i(&) stored in j

    printf("The address of j is %u \n", &j);//this means address(&) of j 
    printf("The value of j is %u \n", *(&j));// this means value(*) of address(&) stores in j

    //NOW;
    //pointer of a pointer
    int **k=&j;
    printf("The value of k is %u\n", *k );//this will tell the value of k which in actual storing the address of j
    printf("The value of k is %u\n", **k );// this will tell the value of value of j ,that is the value of j which is storing the address of i
    printf("The address of k is %u\n", &k );

    return 0;
}