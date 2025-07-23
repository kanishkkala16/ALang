# include<stdio.h> 

int main(){
    float num1, num2, num3, num4;

    printf("Enter the 1st number \n");
    scanf("%f", &num1);

    printf("Enter the 2st number \n");
    scanf("%f", &num2);

    printf("Enter the 3st number \n");
    scanf("%f", &num3);

    printf("Enter the 4st number \n");
    scanf("%f", &num4);

    if (num1 > num2){
        if(num1 > num3){
            if (num1 > num4);
            printf("%f is the biggest number \n", num1);
        }
    }

    if (num2 > num3){
        if(num2 > num4){
            if (num2 > num1);
            printf("%f is the biggest number \n", num2);
        }
    }

    if (num3 > num4){
        if(num3 > num1){
            if (num3 > num2);
            printf("%f is the biggest number \n", num3);
        }
    }

    if (num4 > num1){
        if(num4 > num2){
            if (num4 > num3);
            printf("%f is the biggest number \n", num4);
        }
    }
    return 0;
}