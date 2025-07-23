# include<stdio.h> 
# include<string.h>

int main(){
    // char *st = {"munna bhai"};
    // int printlen = strlen(st);
    //helps to tell the length of the string entered in the function (strlen);
    // printf("%d \n", printlen);
    // printf("%s", st);
    // return 0;

    // char *value = {"My pet now beware!!"};
    // char length[45];
    // strcpy(length, value);
    // printf("The value of string is \"%s\" \n", length);
    //helps to enter the value of one string to another string and store in it as in this case;
    //i have copied the value of char value to value of char length using (strcpy) function

    char str1[45] = {"Hello"};
    char *str2 = {" World"};
    strcat(str1,str2);
    printf("The updated value of str1 is \"%s\" \n", str1);
    //this function called (strcat) is used to concatenate the two strings into one 

    // char str1[45] = {"Hello"};
    // char *str2 = {"World"};
    // int x = strcmp(str1,str2);
    // printf("The value of x is %d \n", x);
    //this function is used to find the difference btw the ascii value btw the two strings
    // -1 means the ascii value of hello is less than ascii value of world
    // 0 means the ascii value of both the words or lines in the string are equal
    // +1 means the ascii value of the first string is more than the ascii value of string 2

    return 0;
    
}