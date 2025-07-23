# include<iostream>

using namespace std;

class complex
{   
    int a, b;

    public:
    complex()
    {
        a = 0;
        b = 0;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    void Display(void)
    {
        cout<<"The point is ("<<a<<", "<<b<<")"<<endl;
    }
};

int main()
{
    complex z(1,1);
    z.Display();
    
    complex t(6,9);
    t.Display();

    complex u(9);
    u.Display();

    // complex p();
    // p.Display();   
    
    return 0;
}