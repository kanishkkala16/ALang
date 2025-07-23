# include<stdio.h> 
# include<string.h> 

struct employee{
    int code;
    float salary;
    char name[25];
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 101;//you can take it as a ptr points to the employee code e1;
    //&e1->code = 101; ---> this wont work
    //(*ptr).code = 101;
    //e1.code = 101;
    //line number 17 and 18 will code or initialize the same value which is 101 in this case;
    printf("%d", (*ptr).code);
    return 0;
}



    