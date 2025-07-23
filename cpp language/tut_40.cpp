#include <iostream>

using namespace std;

class Student
{
    int roll_num;

public:
    void set_num(int);
    void get_num(void);
};

void Student ::set_num(int num)
{
    roll_num = num;
}
void Student ::get_num(void)
{
    cout << "The roll number is " << roll_num << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks(void)
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result(void);
};

void Result ::display_result(void)
{
    get_num();
    get_marks();
    cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    Result kanishk;
    kanishk.set_num(18);
    kanishk.set_marks(94.5, 90.5);
    kanishk.display_result();

    return 0;
}

/*
    1) if we are inheriting (B from A) and (C from B) [ A---> B--->C]
    2) then A is the base class for B and C is the base class for B
    3) A, B, C is called the inheritence path.
*/