# include<stdio.h> 

int main()
{
    FILE *ptx;
    ptx = fopen("fprintf.txt" , "w");

    int number = 99;
    fprintf(ptx, "Mein name ist Kanishk Kala. \n");
    fprintf(ptx, "Ich bin achtzehn jahre alt. \n");
    fprintf(ptx, "Und ich komme aus Indien. \n");
    fprintf(ptx, "Ich wohne in Delhi. \n");
    fprintf(ptx, "The number is : %d", number);

    fclose(ptx);
    return 0;
}