# include<stdio.h> 

typedef struct employee{
    char name[45];
    float salary;
}emp;

int main()
{   
    emp e1, e2;

    printf("Enter the name of e1 \n");
    scanf("%s", &e1.name);
    printf("Enter the salary of e1 \n");
    scanf("%f", &e1.salary);

    printf("Enter the name of e2 \n");
    scanf("%s", &e2.name);
    printf("Enter the salary of e2 \n");
    scanf("%f", &e2.salary);

    printf("The values are %s, %0.02f, %s, %0.02f \n" ,e1.name, e1.salary, e2.name, e2.salary);

    FILE *ptr;
    ptr = fopen("prob_2a.txt" , "w");

    fprintf(ptr, "%s , %f \n", e1.name, e1.salary );
    fprintf(ptr, "%s , %f \n", e2.name, e2.salary );

    fclose(ptr);
    return 0;
}