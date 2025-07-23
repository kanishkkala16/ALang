# include<iostream>

using namespace std;

class employee
{
    int id;
    int static count;

    public:
    void setdata(void)
    {
        cout<<"Enter the value of id "<<endl;
        cin>>id;
        count++;
        
    }

    void putdata(void)
    {
        cout<<"The employee id of count "<<count<<" is "<<id<<endl;
    }

    static void getcount(void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};

int employee :: count = 1000;

int main()
{
    employee harry, bablu, ram;

    harry.setdata();
    harry.putdata();
    employee::getcount();

    bablu.setdata();
    bablu.putdata();
    employee::getcount();

    ram.setdata();
    ram.putdata();
    employee::getcount();
    return 0;
}