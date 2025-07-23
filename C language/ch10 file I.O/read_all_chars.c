# include<stdio.h> 

int main()
{
    char c;
    FILE *ptr;

    ptr =  fopen("read_all_chars.txt" , "r");
    // c = fgetc(ptr);
    // while(c != EOF)// EOF stands for end of file and deemed as a constant in c language
    // {
    //     printf("%c", c);
    //     c = fgetc(ptr);
    // }
    //another way of reading the file till the end or i should say if i or anyone wants to run and read the entire file then as do as follows;

    c = fgetc(ptr);
    while(1){
        printf("%c", c);
        c = fgetc(ptr);
        if(c==EOF){
            break;
        }
    }

    fclose(ptr);

    return 0;
}
