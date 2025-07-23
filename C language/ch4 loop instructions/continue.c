# include<stdio.h> 

int main(){
    int skip = 0;

    while(skip<10){
        skip++;
        if(skip!=5){
        continue;
        }

        else printf("The desired value is %d", skip);
    }
    return 0;
}