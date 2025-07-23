# include<stdio.h> 


void SumandAvg(int a, int b, int *sum, float *avg);

int main()
{   int i , j , sum;

    i=20, j=40;
    float avg;
   
    SumandAvg(i,j, &sum, &avg);
    
    printf("The sum and avg of i and j are %d and %.02f respectively", sum, avg);
    return 0;
}

void SumandAvg(int a, int b, int *sum, float *average){
    *sum= a+b;
    *average= *sum/2;

}