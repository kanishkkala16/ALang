# include<stdio.h> 


// create a2d array by taking input from the user. write a display function to print the content of this 2-d array on the screen.
// maybe one day i willl solve it or deem it to be useless to even attemppt for its simplicity
// write now i am just struggling with my touch typing dated 16/01/2021

// void display(int a, int b){
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//         printf("Enter the value of %d in %d \n", i+1, j+1);
//         scanf("%d", &a);

//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//             printf("The marks of student %d in subject %d are: %d \n",i+1, j+1);
//         }

//     }

// }

int main()
{
    int list1, list2;
    int array[list1][list2];
    printf("Enter the list length of list1\n");
    scanf("%d", &list1);
    printf("Enter the list length of list2\n");
    scanf("%d", &list2);
    display(list1,list2);

    return 0;
}