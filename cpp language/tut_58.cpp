#include <iostream>
#include <cstring>
//un-comment the last two lines and correct the code;
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

// now this CWH class has become a abstract class which means that this class has been created with the sole purpose of inheriting more classes from it ;
// you can think of it as a design template; 
public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;        
    }
    // virtual void Display(void) = 0;
    //this equal to 0 means this function will not do anything;
    //this is called pure virtual function
    //do nothing function
    //maling this function a pure virtual class function means that eevry derived class which has been inherited from the base class must override this displa function
    //which in laymen terms mean that every derived class below must have its own derived display function';

   
};

class CWHvideo : public CWH
{
    float videoLength;
    public:
    CWHvideo(string s, float r, float vl): CWH(s,r)
    {
        videoLength = vl;
    }
    virtual void Display(void)
    {
        cout<<"The title of this video is "<<title<<endl;
        cout<<"The rating of this video out of 5 is "<<rating<<endl;
        cout<<"The lenth of this video in minutes is "<<videoLength<<endl;
    }
};

class CWHtext : public CWH
{
    float WordCount;
    public:
    CWHtext(string s, float r, float wc): CWH(s,r)
    {
        WordCount = wc;
    }
    // void Display(void)
    // {
    //     cout<<"The title of this text is "<<title<<endl;
    //     cout<<"The rating of this blog out of 5 is "<<rating<<endl;
    //     cout<<"Number of words in this video are "<<WordCount<<endl;
    // }
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

    // arr[0]->Display();
    // arr[1]->Display();
    return 0;
}