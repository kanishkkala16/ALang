# include<stdio.h> 
# include<math.h>

int main(){
    float p, t, r;


    printf("Enter the prinicipal amount \n");
    scanf("%f", &p );

    printf("Enter the rate of interest \n");
    scanf("%f", &r ); 

    printf("Enter the time  \n");
    scanf("%f", &t );
    
    printf("Your compounded interest comes out to be %f", p*pow((1 + r /100),t) );
    return 0;
}