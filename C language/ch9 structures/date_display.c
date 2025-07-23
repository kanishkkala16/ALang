# include<stdio.h> 

typedef struct date{
    int date; 
    int month; 
    int year; 
}date;

void display(date c){
    printf("The date is : %d/%d/%d \n", c.date, c.month, c.year);
} 

int compare(date c, date d){
    if(c.year>d.year){
        return 1;
    }
    if(c.year<d.year){
        return -1;
    }

    if(c.month>d.month){
        return 1;
    }
    if(c.month<d.month){
        return -1;
    }

    if(c.date>d.date){
        return 1;
    }
    if(c.date<d.date){
        return -1;
    }

    return 0;

}
int main()
{   
    date c, d;
    printf("Enter the value of date 1 in (XX) format\n");
    scanf("%d", &c.date);

    printf("Enter the value of month 1 in (XX) format\n");
    scanf("%d", &c.month);

    printf("Enter the value of year 1 in (XX) format\n");
    scanf("%d", &c.year);


    printf("Enter the value of date 2 in (XX) format\n");
    scanf("%d", &d.date);

    printf("Enter the value of month 2 in (XX) format\n");
    scanf("%d", &d.month);

    printf("Enter the value of year 2 in (XX) format\n");
    scanf("%d", &d.year);

    display(c);
    display(d);

    int x = compare(c,d);

    printf("The function returns : %d \n", x);


    return 0;
}