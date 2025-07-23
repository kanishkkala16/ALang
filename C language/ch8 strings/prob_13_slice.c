# include<stdio.h> 

void slice(char *ptr, int m, int n){
    int l = 0;
    while(l<n){
        ptr[l] = ptr[l+m];
        l++;
    }
    ptr[l] = '\0';
}
int main()
{
    char st[] = "helloworld";
    slice(st, 1, 4);
    printf("%s", st);

    return 0;
}