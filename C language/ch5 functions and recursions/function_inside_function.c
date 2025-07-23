# include<stdio.h> 

void Gutenmorgen();
void Gutenabend();
void Gutenacht();

// the program will start to program from inside main function not the void function
int main()
{   
    printf("Hello world\n");

    Gutenmorgen();// using only one funtion call i could print all the three desired functions
    

    printf("By let me sleep!!\n\n\n");
    
    Gutenmorgen();
    return 0;
}

void Gutenmorgen(){
    printf("Guten morgen kanishk \n");// as soon as i called guten morgen it came here and called the guten abend function resting inside it 
    Gutenabend();
   
}
void Gutenabend(){
    printf("Guten abend kanishk \n");// as soon as the guten morgen function called guten abend function it came here and executed the gutnacht funtion as well.
    //so thats how u can if u want to offcourse  call multiple functions usiing only one (FUNCTION CALL)
    Gutenacht();
}
void Gutenacht(){
    printf("Gute nacht kanishk \n");
}
