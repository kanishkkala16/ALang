# include<stdio.h> 

int main()
{
    char arr[] = {"Bablu Arya"};
    char *ptr = arr;

    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

   //printf("%s", ptr);

    return 0;
}