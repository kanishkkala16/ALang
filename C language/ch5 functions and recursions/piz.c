# include<stdio.h> 


void eatingpizza(int a);

int main()
{   int b = 344;

    printf("The value of b before eating pizza is %d \n", b);

    eatingpizza(b);
    
    printf("The value of b after eating pizza is %d \n", b);
    
    
    return 0;
}

void eatingpizza(int a){
    a=77;
}