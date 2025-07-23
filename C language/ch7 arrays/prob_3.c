# include<stdio.h> 

void reverse(int *arr, int n){
    for(int i=0; i<(n/2); i++){
        // temp = a;
        // a = b;
        // b = temp;
        //similarily;
        int temp;

        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    reverse(arr, 8);
    for(int i=0; i<8; i++){
        printf("The value of %d is : %d \n", i+1 , arr[i]);
    }
    // eight is the range of the array.

    return 0;
}