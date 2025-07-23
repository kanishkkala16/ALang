# include<stdio.h> 

int main(){
    
    int n;
    int sum=0;
    printf("Enter the value of n \n");
    scanf("%d", &n );

    for(int i = 0; i<=n; i++){
        sum+=i;
    }
    printf("The sum of the first %d numbers is %d \n",n ,sum);
    return 0;
}