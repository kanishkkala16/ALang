# include<stdio.h> 

int main(){
    
    int a;
    printf("Enter a \n");
    scanf("%d", &a);
    // one liner code 
    // (condition)  ? (print this) : (or print this)
    (a<5) ? printf("a is less than 5") : printf("a is not less than 5");

    

    return 0;
}