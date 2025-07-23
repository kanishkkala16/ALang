# include<stdio.h> 

int main(){
    int a ;
    int vip = 0;
    //(vip = 10);

    printf("Enter your age \n");
    scanf("%d", &a);

    // ! symbol is a not operator and || symbol is a or operator
    if( (a>=18 && a<=89) || !(vip==10) ){
        printf(" Either our age is above 18 and below 90 or you are a vip, hereby making you eligible to drive. \n");
    }

    else{
        printf("Your are either below 18 or above 90 , hence you cannot drive. \n");
    }

    //if i write a=50 and you enter any number in terminal then it will return yes you can drive and second statment 
    //it will give that it is a half century
    //this is so because if else work on boollean logic and in c any value above 0 is meant to be true 
    if(a==50){
        printf("Half century!!");
    }


    // operator precedence
    // 1  !
    // 2  *, /, %
    // 3  +, - 
    // 4  >, <, <=, >=, 
    // 5  ==, !=
    // 6  &&
    // 7  ||
    // 8  =
    
    return 0;
}