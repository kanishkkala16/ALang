# include<stdio.h> 

int main(){

    // while loops, 2 do while loop, 3 for loop
    // if have to enter the value for scanf even if you have not used the printf syntax

    int a ;
    
    scanf("%d", &a);
    //while(a>15){this will lead to an infinity loop

    while(a<15){
        printf("%d \n", a);
        a++;
    }
    return 0;
}// this syntax checks the condition first and then runs the code if the condition satisfies so it is very much possible that in while loops it doesnt return a value at all
//*in a case where the condition is not met at all