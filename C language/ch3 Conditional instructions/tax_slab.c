# include<stdio.h> 

int main(){

    float tax = 0;
    float income;

    printf("Enter your income \n");
    scanf("%f", &income);

    if(income >=250000 && income <= 500000){

        tax= tax +0.05*(income - 250000);
    }

    if(income >=500000 && income <= 1000000){

        tax= tax +0.05*(income - 500000);
    }

    if(income >=500000 && income <= 1000000){

        tax= tax +0.20*(income - 500000);
    }

    if(income >=1000000){

        tax= tax +0.30*(income - 500000);
    }

    printf("Your income tax which is to be paid by the end of 31st decemeber is %f", tax);






    return 0;
}