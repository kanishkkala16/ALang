# include<iostream>

using namespace std;

typedef class employee
{
    int id;
    int salary;
    int m;

    public:
    int getm()
    {
        cout<<"How many employees do you wanna enter today"<<endl;
        cin>>m;
        return m;
    }
    void setdata(void){
        salary = 1000;
        cout<<"Enter the value of id "<<endl;
        cin>>id;
    }

    void getdata(void){
        cout<<"The salary of employee id "<<id<<" is "<<salary<<endl;
    }
}EMP;

int main()
{
    // int n;
    // cout<<"Enter the value of number of employees you wanna feed today"<<endl;
    //for some reason the above thing hangs the terminal;
    // i had to make a seperate variable in the class and then pass a int function for the value to get in and run successfully :) ;

    EMP loop;
    int l = loop.getm();

    EMP facebook[l];
    for (int i = 0; i < l; i++)
    {
            facebook[i].setdata();
            facebook[i].getdata();
    }


    // EMP bablu, ram, sham, sonali;

    // bablu.setdata();
    // bablu.putdata();

    // ram.setdata();
    // ram.putdata();

    // sham.setdata();
    // sham.putdata();

    // sonali.setdata();
    // sonali.putdata();

    //instead of doing this for 1000s of employees make an arrray and run it in a for loop or any loop for that matter;

    

    return 0;
}