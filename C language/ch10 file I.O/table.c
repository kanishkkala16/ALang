# include<stdio.h> 

int main()
{
    FILE *ptr;
    int n;

    printf("Enter the table you want the table of. \n");
    scanf("%d", &n);

    ptr = fopen("Table.txt" , "w");

    fprintf(ptr, "The multiplication table of %d comes out to be :-\n", n);

    for(int i = 0; i<10; i++){
        fprintf(ptr, "%d * %d = %d \n" , n, i+1, n*(i+1));
    }
    return 0;
}
