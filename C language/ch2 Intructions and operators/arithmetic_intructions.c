# include<stdio.h> 
# include<math.h>

int main(){
    // int a, b;
    // a = 4, b = 8;
    // int z = b * a;

    // // // You cannot write b * a = z

    // printf("The value of z is : %d \n", z) ;
    // printf("The value of a - b is : %d \n", a - b);
    // printf("The value of a * b is : %d \n", a * b);
    // printf("The value of a / b is : %d \n", a / b);

    
 
    // // Here a and b are operands and addition, subs, product and division are arithmetic operators


    printf("5 when divided by 2 leaves a remainder of %d \n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of %d \n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d \n", 5%-2);
    //sign will be taken of the number which is in numerator.

    //printf("The product of 4 and 5 is %d", (4)(5)); // this will not return 20
    //printf("The product of 4 and 5 is %d", (4).(5)); // this will not return 20
    printf("The product of 4 and 5 is %d\n", (4)*(5));  // this will return 20

    // no operator is assumed to be present
    // int a,b,z
    // z = (a)(b) doesnt mean a * b
    // z = (a)*(b) does mean a * b

    printf("The value of 2 to the power 3 is %d \n",  2^3); //this wont return 8 as we know it
    printf("The value of 2 to the power 3 is %f \n", pow( 2 , 3 ));  //this will return 8 as we know it
    
    printf(" The value of 4 + 4 is : %d \n", 4 + 4);
    printf(" The value of 4.5 + 4 is :  %f \n", 4 + 4);
    printf(" The value of 4.6 + 4.4 is : %f \n", 4 + 4);
    printf(" The value of 3.0 / 9 is : %d \f", 3.0 / 9);

    int f = 3.5; // will be demoted to a int i.e 3
    float g = 6; // will be promoted to a float i.e. 8.0

    printf("The value of f is : %d \n", f);
    printf("The value of g is : %f \n", g);
    // such stuff creates ambiguity, so not cool,  DONT DO IT!!





    return 0;
}