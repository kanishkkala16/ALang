# include<stdio.h> 

void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;// -1 if you want to decrypt;
        ptr++;
    }
}
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;// -1 if you want to decrypt;
        ptr++;
    }
}
int main()
{
    //char *c = "Harry";
    //i cannot write like this as char *c is a read only memory;
    char c[] = "Kanishk";
    encrypt(c);
    printf("The encrypted string is %s \n" , c);
    decrypt(c);
    printf("The encrypted string is %s", c);


    return 0;
}