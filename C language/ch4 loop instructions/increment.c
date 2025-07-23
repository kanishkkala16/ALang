# include<stdio.h> 

int main(){
    int i;
    i = 5;
    // printf("The value of i is %d \n", i++);// in i=++ first the value is printed and then it increments so this line will return 5 as ans
    // printf("The value of i is %d \n", i);// and this line will return value as 6 as it has been incremented by the line above

    // now if i do the same thing with ++i then;
    printf("The value of i is %d \n", ++i);// in this situation i will increment the value to 6 first and then prinnt the value in 6
    printf("The value of i is %d \n", i);// ya u get the idea i hope i mean you are not that dumb right (future me)
    i+=20;
    printf("The value of i is %d now because you know just practising my touch typing", i);
    
    return 0;
}