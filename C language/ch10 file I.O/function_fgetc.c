# include<stdio.h> 

int main()
{
    FILE *ptr;
    ptr = fopen("function_fgetc.txt", "r");
    
    // char c = fgetc(ptr);// this function helps to read the characters in the file character by character;
    // printf( "The value of my character is %c \n", c);
    // printf( "The value of my character is %c \n", c);
    // printf( "The value of my character is %c \n", c);
    //all the three lines above will print the same character k as i have put the fgetc function only once
    // if i want my program to read the characters of the file literally character by character then I will do the following;
    
    printf( "The value of my character is : %c \n", fgetc(ptr) );
    printf( "The value of my character is : %c \n", fgetc(ptr) );
    printf( "The value of my character is : %c \n", fgetc(ptr) );
    printf( "The value of my character is : %c \n", fgetc(ptr) );
    printf( "The value of my character is : %c \n", fgetc(ptr) );
    printf( "The value of my character is : %c \n", fgetc(ptr) );
    printf( "The value of my character is : %c \n", fgetc(ptr) );
    fclose(ptr);

    //this will read the characters in the file character by character character
    return 0;
}