# include<stdio.h> 

int main()
{
    FILE *ptr;
    //ptr = fopen("sample.txt", "r");// --->this is used for reading the file;
    // ptr = fopen("sample.txt", "w");// --->this is used for writing the file;
    // ptr = fopen("sample2.txt", "r");// --->this wont create a new file in the folder as its a read only
    //(i mean thats the most logical way to remember it so yaa)
    ptr = fopen("file_io_basics.txt", "w");// --->this will create a new file in the folder;
    return 0;
}