# include<stdio.h> 

int main(){

    int rating;

    printf("Rate the item from 1 to 5 \n");
    scanf("%d", & rating);

    // this is a swittch case and will by default runn all the cases inside 
    // for which n=we need to use break function
    switch(rating){
        case 1: 
            printf("Your rating is 1 \n");
        case 2: 
            printf("Your rating is 2 \n");
        case 3: 
            printf("Your rating is 3 \n");
        case 4: 
            printf("Your rating is 4 \n");
        case 5:  
            printf("Your rating is 5 \n");
        default:
            printf("Your rating is invalid \n");
     }
    // this one shows all the case below the relevant case
    switch(rating){
        case 1: 
            printf("Your rating is 1 \n");
            break;
        case 2: 
            printf("Your rating is 2 \n");
            break;
        case 3: 
            printf("Your rating is 3 \n");
            break;
        case 4: 
            printf("Your rating is 4 \n");
            break;
        case 5:  
            printf("Your rating is 5 \n");
            break;
        default:
            printf("Your rating is invalid");
            break;
     }
        // it only shows the relevant case

    return 0;


}