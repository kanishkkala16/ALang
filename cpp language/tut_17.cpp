# include<iostream>

using namespace std;

inline int product(int a, int b){
    //not recommended to use static funtion with inline function;
    static int c=0;//this executes only once
    c++;
    c = a*b;
    return a*b+c;
}

float return_val(int capital, float rate_of_int = 1.05){
    float c;
    c = capital * rate_of_int;
    return c;
}

//in case you dont want the variables in the function to be changed at all then you can use a constant function along with variable initialization;
int hello(int const *p){
    bool c = true;//ainvayi;
}

int main()
{
    // int a, b;

    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;

    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money;
    cout<<"Enter the value of money you have "<<endl;
    cin>>money;

    cout <<"The capital returned to you will be : "<<return_val(money)<<endl;
    cout <<"If you are a vip you will get a special 10 percent extra interest on the deposited money and that would be : "<<return_val(money,1.25)<<endl<<endl;


    return 0;
}