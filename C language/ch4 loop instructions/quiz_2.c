# include<stdio.h> 

int main(){
    int i;
    i = 0;
    int n;

    printf("Enter the last number you want to see %d \n");
    scanf("%d", &n);
    do {
        printf("The value of i is %d now \n", i);
        i++;
    } while(i <= n);

    return 0;
}