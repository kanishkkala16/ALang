# include<iostream>

using namespace std;

typedef class Employee{
    private:
        int a, b, c;
    public:
        int d, e;

    void setdata(int priv_a, int priv_c, int priv_b);

    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
}Emp;    

void Employee :: setdata(int priv_a, int priv_b, int priv_c){
    a = priv_a; 
    b = priv_b; 
    c = priv_c; 
}


int main()
{   
    Emp kanishk;
    // kanishk.a = 13;//these three lines wont get initialized as the variables of the class are declared in the private section of the class;
    // kanishk.b = 138;//these three lines wont get initialized as the variables of the class are declared in the private section of the class;
    // kanishk.c = 564;//these three lines wont get initialized as the variables of the class are declared in the private section of the class;
    kanishk.d = 56;
    kanishk.e = 69;
    kanishk.setdata(1,5,199);
    kanishk.getdata();    
    //in order to get acccess to those private variables you need pass a function in the public sectiion of the class;
    // which in this case is called setdata();
    return 0;
}
    