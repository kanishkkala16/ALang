# include<stdio.h> 
# include<string.h> 

struct employee{
    int code;
    float salary;
    char name[25];
};

int main()
{   
    struct employee microsoft[100];
    microsoft[0].code = 100;
    microsoft[0].salary = 100.50;
    strcpy(microsoft[0].name, "Kanishk");
    
    microsoft[1].code = 100;
    microsoft[1].salary = 120.50;
    strcpy(microsoft[1].name, "Harry");
    
    microsoft[2].code = 100;
    microsoft[2].salary = 80.50;
    strcpy(microsoft[2].name, "Harish Chandra Singh");

    printf("The code of employee e1 is :%d \n", microsoft[0].code);
    printf("The salary of employee e1 is :%f \n", microsoft[0].salary);
    printf("The name of employee e1 is :%s \n\n", microsoft[0].name);

    printf("The code of employee e2 is :%d \n", microsoft[1].code);
    printf("The salary of employee e2 is :%f \n", microsoft[1].salary);
    printf("The name of employee e2 is :%s \n\n", microsoft[1].name);

    printf("The code of employee e3 is :%d \n", microsoft[2].code);
    printf("The salary of employee e3 is :%f \n", microsoft[2].salary);
    printf("The name of employee e3 is :%s \n\n", microsoft[2].name);


    
    return 0;
}