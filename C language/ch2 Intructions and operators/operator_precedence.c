# include<stdio.h> 

int main(){
    int x, y;
    x = 4;
    y = 6;  

    printf("The value of 9*x + 6*y is: %d \n" , 9*x + 6*y ); //gives ans 72
    printf("The value of 9*x / 6*y is: %d \n" , 9*x / 6*y ); // gives ans 36 cause /, * are on the same level of priority so use brackets simpleee
    printf("The value of 9*x / 6*y is: %d \n" , (9*x) / (6*y) ); 
    
    // gives ans 1 as i used brackets in the correct place its simple math but simply a thing to keep in mind
    // this is called as operators associativity.

    //priority order of operators
    // 1st priority (ersten)  =     *, /, %
    // 2nd priority (zweiten) =     +, -
    // 3rd priority (tritten) =     =(the one which assignes value to a datatype, no the maths equal to)





    return 0;
}