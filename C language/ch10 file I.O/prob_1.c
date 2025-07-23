# include<stdio.h> 

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    char c;
    ptr1 = fopen("prob_1A.txt" , "r");
    ptr2 = fopen("prob_1B.txt" , "w");

    c = fgetc(ptr1); //gets the first character of the read only file which is prob_1A.c in this case.
    while(c!=EOF){
        fputc( c , ptr2);//puts the first character which is initialized in c to the write only file which is prob_1B in this case.
        fputc( c , ptr2);//repeat the above step
        c = fgetc(ptr1);
        //now this will the second character from the read only file and run the while loop again till it reaches EOF i.e. end of file.
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}