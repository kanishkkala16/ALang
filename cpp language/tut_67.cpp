#include<iostream>

using namespace std;

//how to use templates in a function

template<class T1, class T2>
int func_avg( T1 a, T2 b)
{
    float avg = (a+b)/2;
    return avg;
}

template<class T1>
void swappp(T1 &p, T1&q)
{
    T1 h =  p;
     p =  q;
     q =  h;
}

int main()
{   
    float a;
    a = func_avg(40,60);
    cout<<"The average of the entered values has come out to be "<<a<<endl;

    float x = 6.7;
    float y = 8.0;

    swappp(x, y);
    cout<<x<<endl<<y<<endl;
    
    return 0;
}