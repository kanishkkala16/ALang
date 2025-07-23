#include<iostream>

using namespace std;

class Employee
{
    public:
    int id;
    int salary;
    Employee(int ram)
    {
        id = ram;
        salary = 340;
    }
    Employee(){}// i have explainedd below why i have made a default constructor ;
    void display(void)
    {
        cout<<"The salary of employee id "<<id<<" is "<<salary<<endl;
    }
};

class Programmer : public Employee
{
    public:
    int code_lang;
    Programmer(int inpId)
    {
        id = inpId;// since id is being input from the base class then it can take id from a default constructor 
        code_lang = 9;
    }
    void display(void)
    {
        cout<<"The code_lang of programmer id "<<id<<" is "<<code_lang<<endl;
    }
};

int main()
{
    Employee ram(100) , rohan(101);
    ram.display();
    rohan.display();

    Programmer shaam(103);
    shaam.display();
    return 0;
}
/*  syntax for inheritence class;
    class {{ derived class }} : {{ visibility-mode }} {{ base class }}
    {
        variables, classes, methods etcetra;
    }

    NOTE: 1) in case the visibility mode is not declared then the default visibility mode is private; 

          2) if the visibility mode is set public 
          then the public members of the base class becomes public members of the derived class;
           
          3) if the visibility mode is set private 
          then the public members of the base class becomes private members of the derived class;
          
          4) private members never inherited; */