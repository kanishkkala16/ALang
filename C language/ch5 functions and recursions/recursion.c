# include<stdio.h> 


int factorial(int x);

int main()
{   int a;

    printf("Enter the value of a \n");
    scanf("%d", &a);

    printf("The value of factorial %d is %d", a, factorial(a));
    
    return 0;
}

int factorial(int x){
    printf("Calling recursion %d\n", x);// this line is here only for understanding the concept of recursion, not needed if u are actually programming
    if (x==1 || x==0){
        return 1;
    }
    
    else{
        return x * factorial (x-1);// it is sort of working like a loop as i have put the factorial function in this line(20) P. T. O
        //inside the factorial function of line 14 
    }
}