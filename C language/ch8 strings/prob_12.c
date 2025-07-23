# include<stdio.h> 
# include<string.h>

int main()
{
    char str1[45];
    char str2[45];
    int i = 0;
    char c;

    printf("Enter the value of str1\n");
    scanf("%s", str1);
    printf("Enter the value of str2 character by character");

    while(c != '\n'){//cause  of this when we click on enter button once more after writing the string 
                    //it gets input as a new line hereby ending the line here
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i-1]='\0';
    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);
    // gets(str1);
    // puts(str1);
    printf("strcmp for these two strings return %d", strcmp(str1, str2));
    

    return 0;
}
        
    




    
