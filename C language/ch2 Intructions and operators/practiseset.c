# include<stdio.h> 

int main(){

    // question 1 : mention whether the following valid or invalid

    //int a, b = a; not valid part 1
    // int a;
    // int b = a;    // this is valid 

    // int v = 3^3; // this is valid but doesnt give 9 as people expect it to part 2
    // // ^ this sign is called  bitwise zor operator

    // // char z = '21st december'     this is not valid part 3
    // char h ='t';
   

    // question 2 : what will be the datatype of the following

    // float f;
    // f = (3.0 / 8 - 2); 
    // printf("%f \n", f);
    // the datatype it will give is a float oneas 3.0 is of float datatype.
    //it can be a double and a float soits more proficient asn would be that its datatype is double 
    // this is cause every decimaal number in the c language is by default taken into the double datatype


    // question 3 : write a program to determine whether a number is divisible by 97 or not

    // int num;
    // printf("Enter the number \n");
    // scanf("%d", &num);

    // printf(" Divisibility test returns as :- (%d) \n", num%97 );

   int x, y, z, k, result;

   x=2, y=3, z=3, k=1;

   result = 3*x/y-z+k;
   printf("The value of the expression is %d", result);

   return 0;

}