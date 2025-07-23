# include<stdio.h> 

typedef struct vector{
    int x;
    int y;

}vec;

vec sumvector(vec e1 , vec e2){
    vec result;
    result.x = e1.x + e2.x;
    result.y = e1.y + e2.y;
    e1.x = 10;
    //this wont have any effect on the main function as we have not given it a pointer value which could directly access its address;
    return result;
}

int main()
{   
    vec e1, e2, sum; // each pf the variables defined here will have a x value and a y value 
    // e1 and e2 have their x and y values in the lines below and sum.x and sum.y have their values from the function defined above;
    e1.x = 34;
    e1.y = 44;

    e2.x = 54;
    e2.y = 64;
    
    printf("The value of e1 and e1 are %d and %d\n", e1.x, e1.y);
    printf("The value of e2 and e2 are %d and %d\n", e2.x, e2.y);

    sum  = sumvector(e1,e2);

    printf("The sum value of x dimension is %d and that of y dimension is %d", sum.x, sum.y);
    return 0;
}