# include<stdio.h> 

int main(){

    // This is a TYPE DECLARATION INTRUCTIONS 
    int a = 4, b, c;
    b=c=a;
   
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);
    printf("The value of c is %d \n", c);
    

    float a = 1.1;
    float b = a + 8.9;
    printf("The value of b is %f \n",  b);
    return 0;

    //stuff should be in order
    float b = a + 8.9;
    float a = 1.1;
    printf("The value of b is %f \n",  b);




    return 0;
}