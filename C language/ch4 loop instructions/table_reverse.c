# include<stdio.h> 

int main(){
    
    int n;
    printf("Enter the number whose table you want to see \n");
    scanf("%d", &n);

    printf("****The multiplication table of %d****\n\n", &n);
    for(int i = 10; i; i--){
        printf("%d * %d = %d \n\n", n, i, n*i);

    }
    return 0;
}