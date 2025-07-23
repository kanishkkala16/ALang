# include<stdio.h> 
# include<string.h> 

typedef struct employee{
    int code;
    float salary;
    char name[25];
}run;

void Show( run eN, int N){
    printf("The code of employee %d is : %d \n",N,  eN.code);
    printf("The salary of employee %d is : %f \n",N,  eN.salary);
    printf("The name of employee %d is : %s \n",N,  eN.name);
}

int main()
{
    run e1;
    run *ptr;

    ptr = &e1;
    ptr->code = 101;
    strcpy(e1.name, "Kanishk");
    Show(e1,1);
    return 0;
}