# include<iostream>

using namespace std;
// Parameterized constructors and default constructors;

class complex
{   
    int a, b;

    public:
    complex(int , int );// ----> parameterized constructor;
    
        

    void printNumber(void)
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex:: complex(int x,int y)
{
    a = x;
    b = y;
    cout<<"Hello wassup"<<endl;
    
}

int main()
{
    //IMPLICIT CALL;
    complex a(4,6);

    //EXPLICIT CALL;
    complex b = complex(5,7);
    
    a.printNumber();
    b.printNumber();
    return 0;
}