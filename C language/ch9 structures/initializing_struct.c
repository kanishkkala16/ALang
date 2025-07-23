# include<stdio.h> 
# include<string.h> 

struct employee{
    int code;
    float salary;
    char name[25];
};

int main()
{   
    // struct employee microsoft[100];
    // microsoft[0].code = 100;
    // microsoft[0].salary = 100.50;
    // strcpy(microsoft[0].name, "Kanishk");

    // printf("The code of employee e1 is :%d \n", microsoft[0].code);
    // printf("The salary of employee e1 is :%f \n", microsoft[0].salary);
    // printf("The name of employee e1 is :%s \n\n", microsoft[0].name);

    struct employee microsoft = {101, 34.500, "Kanishk"};
    //struct employee microsoft = {0};
    //just input zero in the curly brackets if you want to initialize all the elements in the structure as 0

    printf("The code of employee e1 is : %d \n", microsoft.code);
    printf("The salary of employee e1 is : %f \n", microsoft.salary);
    printf("The name of employee e1 is : %s \n", microsoft.name);
   
    return 0;
}

   