# include<stdio.h> 

int main(){
    int r;
    float pi= 3.14;
    printf("What is the radius of your circle \n");
    scanf("%d", &r);
    printf("The area of your circle is %f \n", pi*r*r);
    int h;
    printf("What is the height of the cylinder? \n");
    scanf("%d" , &h);

    printf("The volume of the cylindr is %f \n", pi*r*r*h);
    printf("The area of the cylinder is %f \n ", 2*pi*r*h);

    return 0;
}