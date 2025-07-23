# include<iostream>

using namespace std;


int c = 69;

int main()
{
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

    int c;
    c = a + b;
    cout<<"The sum of a and b is "<<c<<endl;
    cout<<"But the global value of c is "<<::c;
    //the double comma sign used above is called a scope resolution opertator;

    //a decimal point number is by default taken as a double number by c++;
    //in order for it to be read as a float number;
    // you can either use ( float ) or put a f after the number
    // you can either use ( long double ) or put a l after the number for a number to be read as a long double;
    34.5;
    34.5f;
    34.5F;
    45.44l;
    45.44L;




    return 0;

}