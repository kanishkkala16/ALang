# include<stdio.h> 
int strlength(char *st){
    char *ptr = st;
    int len = 0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char array[45];

    printf("Enter the value of the string\n");
    // scanf("%s", &array);
    gets(array);
    // char array[] = "bablu singh";
    int l =  strlength(array);
    printf("The value of array is %d", l);
    return 0;
}
   