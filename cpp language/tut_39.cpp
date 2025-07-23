#include<iostream>

using namespace std;

class Base
{   
    protected:
    int a;
    //this is a private variable but also not that private so in order to let the other classes inherit this vairable we use protected

    private:
    int b;

    public:
    int c;

};

class Derive : protected Base
{

};

int main()
{
    
    return 0;
}

/* 
members/variables         visibility mode{while inheriting (you know what i mean) }
                        public                  private            protected

private members        not inherited        not inherited        not inherited 

protected members       protected              private             protected

public members           public                private             protected       
*/