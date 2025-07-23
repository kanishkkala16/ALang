#include<iostream>

using namespace std;


class Student // this is the virtual base class; not the ones inherited;
{
    protected:
    int roll_num;

    public:
    void set_num(int r)
    {
        roll_num = r;
    }
    void print_num(void)
    {
        cout<<"Your roll number is "<<roll_num<<endl;
    }
};

class Test : virtual public Student
{
    protected:
    float maths;
    float physics;

    public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_marks(void)
    {
        cout<<"Your marks in maths are "<<maths<<endl;
        cout<<"Your marks in phyics are "<<physics<<endl;
    }
};

class Sports : virtual public Student
{
    protected:
    float score;

    public:
    void set_score(int r)
    {
        score = r;
    }
    void print_score(void)
    {
        cout<<"Your PT score is "<<score<<endl;
        
    }
};

class Result : public Test , public Sports
{   
    private:
    float total;

    public:
    void display_result(void)
    {
        total = maths + physics + score;
        print_num();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }

};


int main()
{
    Result Sumesh;
    Sumesh.set_num(18);
    Sumesh.set_marks(78.9,99.9);
    Sumesh.set_score(9);
    Sumesh.display_result();
    
    return 0;
}