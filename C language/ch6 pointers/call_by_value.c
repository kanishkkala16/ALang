# include<stdio.h> 


int sum (int a, int b);

int main()
{   int a,b;
    
    printf("Enter the value of a \n");
    scanf("%d", &a);
    
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("The value of a is %d and of b is %d \n", a, b);
    printf("The sum of a and b is %d\n", sum(a,b));
    printf("The value of a is %d and of b is %d after calling the function. \n", a, b);
    
    return 0;
}
int sum (int a, int b)
{   int c = a+b;
    a=12323;
    b=213123;               // as discussed in the previous chapter value of a and b in the sum function is different 
    // from the value of a and b in the main funtion.
    //so although i have initialized of a and b as a different number it wont change the value of a and b  in the main function
    //just run the program and ou will know what i am talking about; peace
    return c;
}
//all this is called call by value;
// to address the same problem addressed above  we need call  by referencee which helps us to store the values,
//  not values but the addresses of the entered values
    
