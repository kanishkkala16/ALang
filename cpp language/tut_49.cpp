#include<iostream>

using namespace std;

class ram
    {
        int A , B;

        //int B, A;

        public:
        ram(int x, int y) : A(x) , B(y)
        // ram(int x, int y) : A(x) , B(x+y)
        // ram(int x, int y) : A(x) , B(2*y)
        // ram(int x, int y) : A(x) , B(A+y)

        // ram(int x, int y) : B(y) , A(x+B)
        // this will throw a garbage value of a as in the private section of the class int A is declared first and hereby will be initialized here first too;
        // this will run if i declare int b before int a in the private section of the class
        {
            cout<<"constructor executed "<<endl;
            cout<<"The value of a is "<<A<<endl;
            cout<<"The value of b is "<<B<<endl;
        }
    };

int main()
{
    ram x(45,24);
    
    return 0;
}

/*
syntax for initialization list in constructors:

constructor ( argument-list) : initialization-__cpp_sized_deallocation
{
    assignment + other code;  
}

*/