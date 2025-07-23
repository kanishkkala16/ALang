# include<iostream>
# include<string>
using namespace std;

class binary
{   
    private:
    string s;
    void C_bin(void);

    public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"Enter the value of 's' . "<<endl;
    cin>>s;
}

void binary :: C_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if( s.at(i) != '0' && s.at(i) != '1' )
        {
            cout<<"The number entered is no binary."<<endl;
            exit(0);
        }
        else
        {
            cout<<"This is a binary number "<<endl;
            exit(0); 
            // if the exit thingie is not used then the program will keep printing the cout till the value of i is not more than length of the string;
            //the function to calculate the length of the string is called { s.length() } ;
        }

    }
    
}

void binary :: ones_compliment(void)
{   
    void C_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
            
    }
}

void binary :: display(void)
{
    for (int i = 0; i < s.length(); i++)
    { 
        cout<<s.at(i);    
    }
    cout<<endl;
}


int main()
{
    //Nesting of member function;
    binary s;
    s.read();
    //s.C_bin(); // naah its a private variable now;
    s.display();
    s.ones_compliment();
    s.display();

    return 0;
}
        
        
            
