# include<stdio.h> 

void display(); //function prototype

int main()
{
    printf("Today is monday \n");  //before display (first)
    display();   //this line tells the program to run the  thing in void display and
    //then as sooon as the function is called there then it comes back and runs the remaing thing        //this is a function call
    printf("Today is a very tough day \n"); //after display (third)

    
    return 0;
}
void display(){
    printf("i dont wanna go to the office today \n"); // function definition  (second)
}// u can make multiple functions in a program which u can see in the next file.