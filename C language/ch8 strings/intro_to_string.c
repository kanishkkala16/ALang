# include<stdio.h> 

int main()
{
    //char str[] = {'K','A','N','I','S','H','K','\0'};
    char str[] = {"KANISHK"};
    char *ptr = str;
    // while(*ptr!='\0'){
    //     printf("%c", *ptr );
    //     ptr++;
    // }

    while(*ptr!='\0'){
        printf("%u \n", ptr );
        ptr++;
    }
    

    return 0;
}