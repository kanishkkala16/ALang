# include<stdio.h> 

int main()
{
    char st[54];
    printf("Enter your name\n");
    //scanf("%s", &s[0]);
    //scanf("%s", st);
    
    gets(st);
    //to print strings with a space btw them 
    //puts(st);
    // gets and puts will have to be used together in order to take values and print them simultaneously.

    printf("Your name is %s", st);
    

    return 0;
}