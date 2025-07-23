#include<iostream>

using namespace std;

class Base
{
    int data1;
    public:
        int data2;
        void setData();
        int  getData1();
        int  getData2();
};

void Base :: setData(void)
{
    data1 = 18;
    data2 = 10;
}

int Base :: getData1(void)
{
    return data1;
}

int Base :: getData2(void)
{
    return data2;
}

class Derive : private Base
{
    int data3;
    public:
    void Process();
    void Display();
};

void Derive :: Process(void)
{   
    setData();
    //now since this setdata() function is a private member of Derive class so i cannot call this function in the main functioin directly;
    data3 = data2 * getData1();
}
void Derive :: Display(void)
{
    cout<<"data1 is "<<getData1()<<endl;
    cout<<"data2 is "<<data2<<endl;//can be called directly as it is a public function of Base as it is part of a public class; 
    cout<<"data3 is "<<data3<<endl;//can be called directly as it is derived in the Derive class itlsef
}
int main()
{
    Derive Ram;
    // Ram.setData(); 
    //i have explained the shit above why u reading this shit , dont mind i am just practising my touch typing;
    Ram.Process();
    Ram.Display();
    return 0;
}