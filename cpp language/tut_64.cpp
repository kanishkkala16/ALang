#include<iostream>

using namespace std;

template <class T>
class vector
{
    int size;
    public:
    T *arr;
    vector(int m): size(m)
    {
        arr = new T[size];
    }

    T sumVector(vector &v)
    {
        T x = 0;
        for (int i = 0; i < size; i++)
        {
            x += this->arr[i] * v.arr[i];
        }
        return x;
    }
};

int main()
{   
    vector <float>ram(3);
    ram.arr[0] = 1.1;
    ram.arr[1] = 2.0;
    ram.arr[2] = 3.0;

    vector <float>shaam(3);
    shaam.arr[0] = 3.0;
    shaam.arr[1] = 2.0;
    shaam.arr[2] = 1.0;

    float e = ram.sumVector(shaam);
    cout<<"The dot product of the entered values is "<<e<<endl;
    return 0;
}