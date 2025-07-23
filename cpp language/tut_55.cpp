#include<iostream>

using namespace std;

class BaseClass
{   
    protected:
    public:    
    int var_base;
    void display()
    {
        cout<<"yo"<<endl;
        cout<<"The value of derived class is "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass
{   
    public:    
    int var_derived;
    void display()
    {
        cout<<"The value of base class is "<<var_base<<endl;
        cout<<"The value of derived class is "<<var_derived<<endl;
    }
};
int main()
{   
    BaseClass * base_class_pointer; //(variables derivation) {int a} maafiq
    BaseClass obj1;
    DerivedClass obj2;
    base_class_pointer = &obj2;

    base_class_pointer -> var_base = 69;
    // base_class_pointer -> var_variable = 69; ---> this code will not work;
    base_class_pointer -> var_base = 6996;
    base_class_pointer -> display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj2;
    derived_class_pointer ->var_derived = 79;
    derived_class_pointer ->var_base = 89;
    derived_class_pointer -> display();


    return 0;
}