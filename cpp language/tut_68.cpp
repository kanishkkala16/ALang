#include<iostream>

using namespace std;

template<class T>
class Kanishk
{
    public:
    T data;
    Kanishk (T a)
    {
        data = a;

    }

    void display(void);
   
};

template <class T>
    void Kanishk<T> :: display(void)
    {
        cout<<data;
    }

    void func( int a)
    {
        cout<<"I am first func "<<a<<endl;
    }

    // template<class T>
    // void func( T a)
    // {
    //     cout<<"I am a templatized funtion "<<a<<endl;
    // }
int main()
{
    // Kanishk <char> ram('g');
    // ram.display();

    func(4);
    // {expected output ---> i am first func}
    //exact match takes the priority;
    // void func is has the exact match for its datatype: int and int ;
    // so it will be given priority over the template function;
    // which; can be converted into int datatype;
    return 0;
}