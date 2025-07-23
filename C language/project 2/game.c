# include<stdio.h> 
# include<stdlib.h> 
# include<time.h> 

char possible_outcomes( char user, char comp){
    if(user==comp){
        return 0;
    }
    
    if(user=='s' && comp=='w'){
        return 1;
    }
    else if(user=='w' && comp=='s'){
        return -1;
    }
    
    if(user=='s' && comp=='g'){
        return -1;
    }
    else if(user=='g' && comp=='s'){
        return 1;
    }
    
    if(user=='w' && comp=='g'){
        return 1;
    }
    else if(user=='g' && comp=='w'){
        return -1;
    }
}

int main()
{   
    int result;
    char user, comp;

    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp='s';
    }
    if(number>33 && number<66){
        comp='w';
    }
    if(number>66){
        comp='g';
    }

    printf("Snake Water Gun!! \n");
    
    printf("Enter 's' for Snake, 'w' for Water, 'g' for Gun \n");
    scanf("%c", &user);

    if(user=='s' || user=='w' || user=='g'){
        result = possible_outcomes(user, comp);
        printf("You chose '%c' and the computer chose '%c' \n", user, comp);

        if(result == 0){
            printf("Game Draw!!\n");
        }
        if(result == 1){
            printf("Game Won!!\n");
        }
        if(result == -1){
            printf("Game Lost!!\n");
        }

    }
    else{
        printf("PLEASE ENTER A VALID CHARACTER!!");
    }    
    return 0;
}