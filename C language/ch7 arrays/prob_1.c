# include<stdio.h> 

int main()
{
    int arr[10];
    int *ptr;
    ptr = &arr[0];

    ptr = ptr+2;

    if(ptr== &arr[2]){
        printf("Both (&arr[2]) and (ptr + 2) point to the same location in memory\n");
    }

    else{
        printf("These point to the same location in memory\n");
    }

    return 0;
}