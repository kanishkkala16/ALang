#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

       friend complex sumcomplex(complex o1, complex o2);

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumcomplex(complex o1, complex o2)
{   
    complex o3;

    o3.setData((o1.a + o2.a) , (o1.b + o2.b));
   
}

int main(){
    complex c1, c2, sum;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    sum = sumcomplex(c1,c2);
    sum.printNumber();

    return 0;
}