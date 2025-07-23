# include<stdio.h> 
# include<string.h> 

struct employee{
    int code;
    float salary;
    char name[25];
};

int main()
{
    int a = 34;
    float b = 4.3;
    char c = 'T';

    struct employee a1;
    a1.code = 100;
    a1.salary = 34.500;
    // a1.name = "Ramesh" ----> this wont work
    strcpy(a1.name, "Kanishk"); // ---> but this will

    printf("The employe code is : %d \n", a1.code);
    printf("The employe salary is : %0.02f \n", a1.salary);
    printf("The employe name is : %s \n", a1.name);
   
    return 0;
}