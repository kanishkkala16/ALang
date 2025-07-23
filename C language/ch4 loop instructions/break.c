# include<stdio.h> 

int main(){
    int i= 0;

    do{
        printf("The value of i is %d \n", i + 1);
        i++;

        if(i>=8){
            break;
        }

    }while (i<14);
    return 0;
}