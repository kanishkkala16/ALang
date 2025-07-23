# include<stdio.h> 

int occurence(char *st, int n){
    char *ptr = st;
    int count = 0;
    while(*ptr!='\0'){
        if(*ptr==n){
        printf("Yes, this character is present in the string.\n");
        count++;
        }
        else{
        printf("No, this character is not present in the string.\n");
        }

    ptr++;
    }
    return count;
}

int main()
{
    char st[] = "Kanishk";
    int count = occurence(st, 'k' );
    printf("Occurences = %d", count);

    return 0;
}