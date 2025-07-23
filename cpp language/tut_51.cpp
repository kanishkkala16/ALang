#include<iostream>

using namespace std;

class Complex
{
int real , imaginary;

public:
void setdata(int x, int y)
{
    real = x;
    imaginary = y;
}

void getdata(void)
{
    cout<<"The real part is "<<real<<endl;
    cout<<"The imaginary part is "<<imaginary<<endl;
}


};
int main()
{
    // Complex ram;
    // Complex *ptr = &ram;
    Complex *ptr = new Complex ;

    // ram.setdata(24,45);
    // ram.getdata();

    // (*ptr).setdata(24,45);
    ptr->setdata(24,45);

    // (*ptr).getdata();
    ptr->getdata();


    //array of objects;
    Complex *ptr1 = new Complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();
    ptr1->setdata(2,4);
    ptr1->getdata();

    // *ptr means main dereference krra hu ptr ko
    // yaani ki mai address se value nikaalra hu

    return 0;
}