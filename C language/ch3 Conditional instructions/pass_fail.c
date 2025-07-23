# include<stdio.h> 

int main(){
    int p, c, m, t;

    printf("Enter your physics marks \n");
    scanf("%d", &p);

    printf("Enter your physics marks \n");
    scanf("%d", &c);

    printf("Enter your physics marks \n");
    scanf("%d", &m);

    printf("Enter the maximum marks obtainable (Total marks) \n");
    scanf("%d", &t);

    float f = (p+c+m) * 100 / t ; 
    printf("Your percentage is %f \n", f );

    if(f<40 || p<33 || c<33 || m<33){
        printf("You are fail");
    }
    else{
        printf("Congratulations, you are pass !!");
    }


    return 0;
}