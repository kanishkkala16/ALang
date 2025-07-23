# include<stdio.h> 

int main(){
    int p ,c ,m ,t;
   

    printf("Enter your physcis marks \n");
    scanf("%d", &p);

    printf("Enter your chemistry marks \n");
    scanf("%d", &c);

    printf("Enter your mathematic marks \n");
    scanf("%d", &m);

    printf("Enter the maximum total marks obtainable (in all the above subjects)  \n");
    scanf("%d", &t);

    int f = ( p+c+m ) * 100 / t;
    printf("Your overall percentage comes out to be : %d \n", f );

    if(f>40 && p,c>33 && m<33){
        printf("You are failed in maths , hence you fail");
    }

    else if(f>40 && p,m>33 && c<33){
        printf("You are failed in chemistry , hence you fail");
    }

    else if (f>40 && c,m>33 && p<33){
        printf("You are failed in physics , hence you fail");

    }
    
    else if (f>=40 && p,c,m>=33){
        printf("You have fulfilled both of our passing criteria, hence you pass \n");
        printf("Congratulations !! ");
    }

    

    else if (f<=40 && p,c,m>=33){
        printf("Your overall percentage is less than 40, hence you fail");

    }
    
    return 0;
}
