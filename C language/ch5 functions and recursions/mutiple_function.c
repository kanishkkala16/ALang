# include<stdio.h> 

void Gutenmorgen();
void Gutenabend();
void Gutenacht();

// the program will start to program from inside main function not the void function
int main()
{   
    printf("Hello world\n");

    Gutenmorgen();
    Gutenabend();
    Gutenacht();

    printf("By let me sleep!!\n\n\n");
    
    Gutenmorgen();
    return 0;
}

void Gutenmorgen(){
    printf("Guten morgen kanishk \n");
}
void Gutenabend(){
    printf("Guten abend kanishk \n");
}
void Gutenacht(){
    printf("Gute nacht kanishk \n");
}
