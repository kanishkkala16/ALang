#include<iostream>

using namespace std;

int main()
{
    int a = 69;
    int* ptr = &a;
    cout<<"The value of address of a is "<<&a<<endl;
    cout<<"The value of address of a is "<<(ptr)<<endl;
    cout<<"The value of a is "<<*(ptr)<<endl;
    cout<<"The value of a is "<<a<<endl;

    float* y = new float (47.9292);
    int* z = new int (47);
    cout<<*y<<endl;
    cout<<*z<<endl;

    int* arr = new int [3];
    //dynamically declaring an array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    delete[] arr;
    // freeing the space of the array declared

    cout<<endl<<"********************************************"<<endl<<endl;

    arr[0] = 68;
    arr[1] = 69;
    arr[2] = 70;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    // since the space of the whole array is freed, now it can be allocated with a new set of numbers;
    return 0;
}