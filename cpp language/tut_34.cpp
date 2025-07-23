# include<iostream>

using namespace std;

class Number
{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }

    // when a copy function is not called, the compiler supplies a copy function of its own;
    // so even if i comment out the below function the program will run just fine with zero error;

    Number(Number &reference){
        a = reference.a;
        cout<<"Copy constructor called!!"<<endl;
    }
    void display(void){
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main()
{
    Number x, y, z(69) ,z2;
    x.display();
    y.display();
    z.display();

    //if i want a new object z1 and want it to resemble just like an already mentioned object then --->
    Number z1(z);// this will invoke copy constructor
    z2 = z;// this wont invoke copy constructor
    Number z3 = z;// this will invoke copy constructor

    z1.display();
    z2.display();
    z3.display();



    return 0;
}