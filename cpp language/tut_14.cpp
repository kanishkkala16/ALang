# include<iostream>

using namespace std;

typedef struct employee{
    float salary;
    string name;
    int emp_code;

}emp;

typedef union barter_money{
    int rice;
    char car;
    float pounds;

}barter;


int main()
{   
    //STRUCTURES = you knwo the meaning
    emp x;
    x.salary = 167.50;
    x.name = "kanishk";
    x.emp_code = 100;

    cout<<"Structures"<<endl;
    cout<<x.name<<endl;
    cout<<x.salary<<endl;
    cout<<x.emp_code<<endl;
    cout<<endl;
    cout<<endl;

    // UNIONS = only give value of one of the variables let in the funtion;
    // this is more memory management friendly considering you only want to take the value from the function one at a time;
    cout<<"Unions"<<endl;
    barter y;
    y.rice = 10;
    cout<<y.rice<<"kg"<<endl;

    barter z;
    z.car = 'T';
    cout<<z.car<<" model"<<endl;
    cout<<endl;
    cout<<endl;

    // ENUMS = gives out the variables entered in the enum function in the form of a number starting from zero;
    cout<<"Enum Funtion"<<endl;
    enum{breakfast, lunch, dinner};

    int p = breakfast;
    int q = lunch;
    int r = dinner;

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    cout<<endl;
    cout<<endl;
    
    cout<<r<<endl;
    cout<<q<<endl;
    cout<<r<<endl;



    return 0;
}