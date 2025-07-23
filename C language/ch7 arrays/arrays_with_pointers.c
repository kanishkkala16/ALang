# include<stdio.h> 

int main()
{
    int marks[4];
    int *z;
    //z = &marks[0];
    z = marks;
    //line seven and eight mean the same its just that they varry in their representation

    for(int x=0; x<4; x++){
        printf("Enter the value of %dth student ", x+1);
        scanf("%d", z);
        z++;// this line is incrementing the address of the marks of 1 st student by 4 bytes
    }
    for(int x=0; x<4; x++){
        printf("The value of %dth student is :%d\n", x+1, marks[x]);
    }
    return 0;
}