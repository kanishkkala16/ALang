# include<stdio.h> 


int fibonacci(int Bruh);

int main()
{   
    int n;
    int result;

    printf("Enter the nth number in the fibonacci sequence\n");
    scanf("%d", &n);

    if(n<0){
        printf("The element of a number cannot be found in a negative place\n");
    }
    else{
        result = fibonacci(n);
        printf("The %d number in a fibonacci sequence is  %d",n , result);
    }
    
    return 0;
}

int fibonacci(int Bruh){

    if(Bruh==0){
        return 0;
        
    }
    else if(Bruh==1){
        return 1;
    }
    else if (Bruh==2){
        return 1;

    }
    else{
        return (fibonacci(Bruh - 1) + fibonacci(Bruh - 2 ));
    }
}
    
    