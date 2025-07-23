# include<stdio.h> 

// sum is a function in itself which takes two integer type values and returns their sum in the form of  return values;

int sum(int a, int b); // this is a function prototype declaration

int main()
{   
    int c;

    c = sum(300,5); //function call          // a and b are called parameters which are the place holders of the actual values
    printf("The value of c is %d", c);       // 300 and 5 which are the actual values entered by the user  and are called PARAMETERS :)

    return 0;
}

int sum (int a, int b){
    int c;
    c = a + b;
    return c; //the c in this function and the variable c in the main function are different and will not throw a error

}