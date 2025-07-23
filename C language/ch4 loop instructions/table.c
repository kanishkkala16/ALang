# include<stdio.h> 

int main(){
    int i = 0 , n;
    int sum=0;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    
    while (i<10){
        int z= n*(i+1);
        printf(" %d * %d = %d \n",n , i + 1 , z );
        i++;
        sum+=z;
    }
    printf("The sum of the returned numbers is %d \n" ,sum);
    return 0;
}