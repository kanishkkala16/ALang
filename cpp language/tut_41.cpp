#include<iostream>

using namespace std;

class Base1
{
    protected:
    int b1_int;
    public:
    void set_b1(int a)
    {
        b1_int = a;
    }

};

class Base2
{
    protected:
    int b2_int;
    public:
    void set_b2(int a)
    {
        b2_int = a;
    }
};

class Base3
{
    protected:
    int b3_int;
    public:
    void set_b3(int a)
    {
        b3_int = a;
    }
};

class Derive : public Base1, public Base2, public Base3
{   
    public:
    void show(void)
    {
        cout<<"The value of Base1 is "<<b1_int<<endl;
        cout<<"The value of Base2 is "<<b2_int<<endl;
        cout<<"The value of Base3 is "<<b3_int<<endl;
        cout<<"The value of Base1 + Base2 + Base3 is "<<b1_int + b2_int + b3_int<<endl;
    }
};

int main()
{
    Derive ram;
    ram.set_b1(21);
    ram.set_b2(24);
    ram.set_b3(24);
    ram.show();
    return 0;
}