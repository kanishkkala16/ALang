# include<stdio.h> 
# include<math.h>

int main(){
    float s, r, t;
    
    printf("Enter your monthly expenditure \n");
    scanf("%f", &s);

    printf("Your yearly expense is %f \n", s*12 );
    
    printf("Now, enter the number of years \n");
    scanf("%f", &t);

    printf("Now, enter the predicted average inflation percentage \n");
    scanf("%f", &r);

    printf("Your monthly expense should be equal to or under Rs %f \n", s * pow((1 + r /100),t) );
    printf("Your yearly expense should be equal to or under Rs %f \n", s * 12 * pow((1 + r /100),t) );

    printf("Thank you :)");

        
    return 0;
}