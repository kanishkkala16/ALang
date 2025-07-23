# include<stdio.h> 

int main(){
    int num;

    printf("Enter the year \n");
    scanf("%d", &num);

    if( num%4==0 && num%100!=0 && num%400!=0 ){
        printf("The year %d is a leap year", num);
    }

    else{
        printf("The year %d is not a leap year", num);

    }
    return 0;
}