# include<stdio.h> 

int main(){
    int p,r,t;

    printf("What is the principal \n");
    scanf("%d", &p);

    printf("What is the rate of interest \n");
    scanf("%d", &r);

    printf("What is the time \n");
    scanf("%d", &t);

    printf("The simple interest for your input is %d ", (p*r*t)/100 );

    return 0;
}