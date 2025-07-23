# include<stdio.h> 

void printarray(int *ptr, int n){
    for(int i = 0; i<n; i++){
        printf("the value of %d is : %d\n", i, *(ptr+i));
        ptr[2] = 454355;//unlike how we read before this has the power to change the values of array in the main function 
    //aas we have provided it with the address of the array
    }
}
// void printarray(int ptr[], int n){
//     for(int i = 0; i<n; i++){
//         printf("the value of %d is : %d\n", i+1, ptr[i]);
//     }
    
// }
int main()
{   int array[] = {34,35,5,565,3,4,32,34,37};
    printarray(array,9);
    printf("%d", array[2]);
    
    return 0;
}



