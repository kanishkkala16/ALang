# include<iostream>

using namespace std;

class complex
{   
    int a, b;

    public:
    complex(void)
    {
        a = 10;
        b = 9;
        cout<<"Hello wassup"<<endl;
    }
    //construction declaration;

    void printNumber(void) // ---> this is a default constructor as it doesnt take any parameters;
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    complex c;
    c.printNumber();
    return 0;
}

// Properties;
// its must to declare a contructor in the public section of the class;
// they are automatically invoked when an object is called;
// they cannot return values and do not ahve return types;
// it can have default arguments;
// we cannot refer to their addresses;