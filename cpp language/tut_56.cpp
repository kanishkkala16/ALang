#include<iostream>

using namespace std;

class BaseClass
{   
    protected:
    int var_base = 69;
    public:    
    virtual void display()
    // this basically means that a pointer of this class points to a inherited class and you want its function to run not of this class then you use this virtual work to tell the computer to run the function of the (pointed to) class;
    {
        cout<<"yo"<<endl;
        cout<<"1 The value of derived class is "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass
{   
    int var_derived = 79;
    public:    
    void display()
    {
        cout<<"2 The value of base class is "<<var_base<<endl;
        cout<<"2 The value of derived class is "<<var_derived<<endl;
    }
};
int main()
{   
    BaseClass * base_class_pointer;
    BaseClass base_obj;

    DerivedClass derived_obj;

    base_class_pointer = &derived_obj;  
    base_class_pointer->display();

    return 0;
}