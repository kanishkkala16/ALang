# include<iostream>
# include<iomanip>

using namespace std;

int main()
{   
    //manipulators in cpp;
    
    int c = 3, b = 34, a = 1323;
    cout<<"The value of c is : "<<c<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The value of a is : "<<a<<endl;

    cout<<"The value of c with (setw) is : "<<setw(4)<<c<<endl;
    cout<<"The value of b with (setw) is : "<<setw(4)<<b<<endl;
    cout<<"The value of a with (setw) is : "<<setw(4)<<a<<endl;
    return 0;
}