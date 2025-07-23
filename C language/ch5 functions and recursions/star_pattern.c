# include<stdio.h> 


void printpattern (int x);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printpattern(n);
    
    return 0;
}
// for n=3
void printpattern (int n){
    if(n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for (int i = 0; i<(2*n-1); i++ ){
        printf("*");
    }
    printf("\n");

}
//n=1, 1
//n=2, 3
//n=3, 5
//n=4, 7
//n=5, 9