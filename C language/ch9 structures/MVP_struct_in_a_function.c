# include<stdio.h> 
# include<string.h> 

struct employee{
    int code;
    float salary;
    char name[25];
};

void Show(struct employee eN, int N){
    printf("The code of employee %d is : %d \n",N,  eN.code);
    printf("The salary of employee %d is : %f \n",N,  eN.salary);
    printf("The name of employee %d is : %s \n",N,  eN.name);
}

int main()
{
    struct employee e1, e2;
    struct employee *ptr, *ptr2;

    ptr = &e1;
    ptr->code = 100;
    ptr->salary = 34.500;
    strcpy(e1.name, "Kanishk"); 

    ptr2 = &e2;
    ptr2->code = 101;
    ptr2->salary = 35.500;
    strcpy(e2.name, "Ramesh"); 

    Show(e1,1);
    printf("\n*******************************************\n");
    Show(e2,2);
    return 0;
}