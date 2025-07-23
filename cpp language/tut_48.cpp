#include<iostream>

using namespace std;

class Base1
{
    int data1;

    public:
    Base1(int a)
    {
        data1 = a;
        cout<<"Base1 constructor called "<<endl;
    }
    void print_data1(void)
    {
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2
{
    int data2;

    public:
    Base2(int b)
    {
        data2 = b;
        cout<<"Base2 constructor called "<<endl;
    }
    void print_data2(void)
    {
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

    public:

    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called"<<endl;
    }
    void print_Derived(void)
    {   
        print_data1();
        print_data2();
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};

int main()
{
    Derived Ramu(1,2,3,4);
    // Ramu.print_data1();
    Ramu.print_Derived();
    return 0;
}

/*
class b: public a
{
    order of execution
    first a() then b();
};
class b: public a, public c
{
    order of execution
    first a() then c() and then b();
};
base classes are given more importance than derived class
class b: public a, virtual c
{
    order of execution
    first c() then a() and then b();
};
//virtual class is given more importance than the normal base class
*/