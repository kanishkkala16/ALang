# include<stdio.h>

void Wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{   int a,b;
    
    printf("Enter the value of a \n");
    scanf("%d", &a);
    
    printf("Enter the value of b \n");
    scanf("%d", &b);

    
    printf("The value of a is %d and of b is %d before swaping function\n", a, b);
    // Wrong_swap(a,b); This wont work due to call by value;
    swap(&a, &b); //this will work  due to call by reference;
    printf("The value of a is %d and of b is %d after swaping function. \n", a, b);
    
    return 0;
}
void Wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp; //this is basically a way to swap the values of a and b(pre defined algorithm u can say);
}
void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a = *b;
    *b = temp; 
}
    //the numbers are still not swaped cause we used the wrong swap function 
    //or in short we used  the call by value function which doesnt modify the value of a and b in the main function 
    //in order to do that we need to use the right function or the call by reference function which can modify the the values inside the main function 
    // by changing the values of in the void function below cause the right function we have used the concept of pointers.
   
                   
