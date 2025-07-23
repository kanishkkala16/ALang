#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;        
    }
     void Display(void)
    {
        cout<<"Wrong code bruh; use the virtual function in the class before running void display"<<endl;
    }
};

class CWHvideo : public CWH
{
    float videoLength;
    public:
    CWHvideo(string s, float r, float vl): CWH(s,r)
    {
        videoLength = vl;
    }
    // virtual void Display(void)
    // {
    //     cout<<"The title of this video is "<<title<<endl;
    //     cout<<"The rating of this video out of 5 is "<<rating<<endl;
    //     cout<<"The lenth of this video in minutes is "<<videoLength<<endl;
    // }
};

class CWHtext : public CWH
{
    float WordCount;
    public:
    CWHtext(string s, float r, float wc): CWH(s,r)
    {
        WordCount = wc;
    }
    virtual void Display(void)
    {
        cout<<"The title of this text is "<<title<<endl;
        cout<<"The rating of this blog out of 5 is "<<rating<<endl;
        cout<<"Number of words in this video are "<<WordCount<<endl;
    }
};

int main()
{   
    string title;
    float rating , vidlength;
    int words;

    title = "Bash tutorial with notes!!";
    rating = 4.5;
    vidlength = 19.59;

    CWHvideo ram(title, rating, vidlength);
    // ram.Display();


    title = "Bash tutorial blog with notes!!";
    rating = 4.18;
    words = 758;

    CWHtext shaam(title, rating, words);
    // shaam.Display();

    CWH* arr[2];
    arr[0] = &ram;
    arr[1] = &shaam;

    arr[0]->Display();
    arr[1]->Display();
    return 0;
}
/*
rules for creating virtual functions;
    1) they cannot be static;
    2) they can be accessed only using pointers;
    3) virtual functions can be a friend of another class;
    4) a function in a base class might not be used;
    5) if a virtual function defined in the base class there is no necessity of re defining it in the derived class;

    note: point number 5 basically means that if the compiler doesnt find a normal function in the derived class then it will;
    automatically run the virtual function from the base class itself;
*/