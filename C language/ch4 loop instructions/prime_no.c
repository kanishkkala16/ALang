# include<stdio.h> 

int main(){
    int n = 45, x=1;

    for(int i=2; i<n; i++){
        if (n%i==0 ){
            x = 0;
            break;
        }
    }

    if (x==0){
        printf("This is not a prime number");
    }

    else{
        printf("This is a prime number");
    }

    return 0;
}