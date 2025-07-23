#include <iostream>
#include <string>

using namespace std;
//the above line is used

int add(int a, int b)
{
    int c = a + b;
    return c;
}

// without constructor;
// class employee {
//        public:
//         string name;
//         int salary;

//         void printdetails(){
//             cout<<"The name of the employee is "<<this->name<<" and his salary is "<<this->salary<<" dollars."<<endl;

//         }
//    };

// with constructor;
class employee
{
public:
    string name;
    int salary;

    // constructor;
    employee(string naam, int kamai, int rehesaya)
    { //variables in the constructor and the ones named above can be different
        this->name = naam;
        this->salary = kamai;
        this->secrets = rehesaya;
    }

    void printdetails()
    {
        cout << "The name of the employee is " << this->name << " and his salary is " << this->salary << " dollars." << endl;
    }

    void get_secrets()
    {
        cout << "The secret password of " << this->name << " is " << this->secrets << endl;
    }

private:
    int secrets;
};

class programmer : public employee
{
public:
    int number_of_tickets;
};

int main()
{

    // // BASIC CHARACTER INPUT FUNCTIONS AND VARIABLE INITIALIZATION;
    //     cout<<"Hello World"<<endl;
    //     cout<<"Next line"<<endl;
    //     short X = 45;
    //     cout<<X<<endl;
    //     //i initialized 45 to x variable which is of short datatype and then i printed it usiing cout
    //     // cout stands for character output;

    // //SHORT CUT FOR BIG VARIABLES IN C

    //     //camel case notation;
    //     int marksInMaths = 94;
    //     cout<<marksInMaths<<endl;
    //     cout<<"The marks of sumesh in mathematics are : "<<marksInMaths<<endl;

    // //  TYPES OF DATATYPES

    //     // there are many types of datatypes in cpp unlike c so you might wanna have a look at all of them;
    //     int q;
    //     short w;
    //     long e;
    //     long long r;
    //     float t;
    //     double y;
    //     long double u;

    //     //now if you wanna fix a value to a variable and wanna make sure that its value doesnt get reassigned then you can do as follows;

    //     int const j = 45;
    //     cout<<j<<endl;
    //     //now the value of j that is 45 in this case will not be able to change intentionally or unintentionally through a bug;

    //     int a,b;

    //     cout<< "Enter the first number"<<endl;
    //     cin>>a;
    //     cout<< "Enter the second number"<<endl;
    //     cin>>b;
    //     cout<< "The value of the first number is : "<<a<<endl;
    //     cout<< "The value of the second number is : "<<b<<endl;

    //     cout<<"Their sum is : "<<a+b<<endl;
    //     cout<<"Their difference is : "<<a-b<<endl;
    //     cout<<"Their product is : "<<a*b<<endl;
    //     cout<<"Their division is : "<< (float) a/b<<endl;

    // // HOW TO INPUT VALUE FROM USER

    //     int age ;
    //     cout<<"Enter the age"<<endl;
    //     cin>>age;
    //     // if(age>=18 && age<=80){
    //     //     cout<<"You can vote";
    //     // }
    //     // else{
    //     //     cout<<"Invaid age";
    //     // }

    // // SWITCH CASE

    //     switch (age)
    //     {
    //     case 12:
    //         cout<<"You are 12 rn better listen to your parents"<<endl;
    //         break;
    //     case 78:
    //         cout<<"Hello sir hope you are doing fine"<<endl;
    //         break;
    //     case 18:
    //         cout<<"Be careful kid the world is amazing on the outside but dark and greedy on the inside"<<endl;

    //     default:
    //         cout<<"You are neither 12 nor 18 nor 78 , we aint got no wisdom for you peasant. Get out of our program!!";
    //         break;
    //     //default function is used to execute the code inside it IF any of the switch cases dont match with the value entered by the user .

    //     case 90:
    //         cout<<"Enjoy your last days old person enjoy!!";
    //         break;
    //     }

    // //  WHILE LOOP , DO WHILE LOOP , FOR LOOP;

    // int index = 0;
    // while(index<34){
    //     cout<<"You are at index number"<<index<<endl;
    //     index++;
    // }

    // do{
    //     cout<<"You are at index number : "<<index<<endl;
    //     index++;
    // } while (index>34);

    // for (int i = 0; i < 34; i++)
    // {
    //     cout<<"The value of index number is : "<<index<<endl;
    //     index++;
    // }
    // int a,b;

    // cout<< "Enter the first number"<<endl;
    // cin>>a;
    // cout<< "Enter the second number"<<endl;
    // cin>>b;
    // cout<<"The sum of the two variables are : "<<add(a,b)<<endl;

    // // ARRAYS

    //     int arr[3] = {1,3,5};
    // // array index is 0,1,2;
    //     cout<<arr[1];

    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of student "<<i+1<<endl;
    //     cin>>marks[i];
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"The marks of student " <<i<< " is : "<<marks[i]<<endl;
    // }

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is : "<<arr[i][j]<<endl;
    //     }

    // }

    // // MORE ABOUT TYPECASTING;

    // int a = 343;
    // //using type casting
    // cout<<(float) a/7;

    // //another example;

    // float x = 444.33;
    // cout<<(int) x;

    // // STRINGS;

    // string name = "Mein name ist kanishk kala.";

    // cout<<name<<endl;
    // cout<<name.length()<<endl;
    // cout<<name.substr(0,3)<<endl;
    // cout<<name.substr(1,3)<<endl;

    /*the numbers in bracket above are not the exactly the range of the string between which the characters are needed;
    they just mean in simple language and i quote 
    "(0,3) means 0 se start krke teen aage ke string batao"
    in the string = "kanishk" it would mean null se start krke, uske aage ke teen that is "kan"    
    "(1,3) means 1 se start krke teen aage ke string batao"
    in the string = "kanishk" it would mean "k" se start krke, uske aage ke teen that is "ani" */

    // // POINTERS;

    // int a ;
    // int *ptr;
    // // the star symbol is known as a de referencing value whic in laymen terms mean value of ptr;
    // a=34;
    // ptr = &a;

    // cout<<a<<endl;
    // cout<<*ptr<<endl;
    // cout<<"The value of a is : "<<a<< " and its address which is stores in &a is : "<<&a<<endl;
    // cout<<"The value of *ptr is : "<<*ptr<< " and its address which is stores in *ptr is : "<<ptr<<endl;

    // //OBJECT ORIENTATED PROGRAMMING (OOPs);

    /*  public: 
        accessable to all and outside the class too;

        //protected:
        //accessable only inside the class and not outside;

        //private:
        //they are not accessable outside class directly but accessable through a sub class' */

    //without constructor;
    // employee kan;
    // kan.name = "Kanishk Kala";
    // kan.salary = 100;
    // kan.printdetails();

    //with constructor;
    //employee arya{"Arya Vansh Kala", 500, 78910};
    //arya.printdetails();
    // cout<<arya.secrets;
    // the above wrote line wont work as we are trying to call a variable which is saved in the private thingie
    //hence it cannot be accessed directly but this can be done by the functions inside the function
    //arya.get_secrets();

    // // programmer Sholay{"harish" , 400, 800};
    // // Sholay.printdetails();

    return 0;
}
