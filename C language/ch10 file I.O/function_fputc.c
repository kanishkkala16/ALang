# include<stdio.h> 

int main()
{
    FILE *ptr;
    int num = 1234567;
    ptr = fopen("function_fputc.txt" , "w");
    fputc('K' , ptr);
    fputc('A' , ptr);
    fputc('N' , ptr);
    fputc('I' , ptr);
    fputc('S' , ptr);
    fputc('H' , ptr);
    fputc('K' , ptr);
    fprintf(ptr, "\n");
    fprintf(ptr, "%d" ,num );
    fclose(ptr);
    return 0;
}