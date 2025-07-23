# include<iostream>

using namespace std;

// Destrcuctors;
// --> doesnt take an argument nor returns any value;

int count = 0;

class num
{   
    int a;

    public:
    
    num()
    {
        count++;
        cout<<"This is the time constructor is called for object number: "<<count<<endl;
    }

    ~num()
    {
        cout<<"This is the time destructor is called for object number: "<<count<<endl;
        count--;
    }
    
    void display(void)
    {
        cout<<"Display function called"<<endl;
        cout<<count<<endl;
    }
};

int main()
{
    cout<<"Entering the main function"<<endl;
    cout<<"Creating the first object n1"<<endl;
    num n1;
    n1.display();
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more function n2 and n3"<<endl;
        num n2;
        n2.display();
        num n3;
        n3.display();
        cout<<"Exiting this block"<<endl;
    }
    cout<<"We are back into the main function now"<<endl;
    

    return 0;
}