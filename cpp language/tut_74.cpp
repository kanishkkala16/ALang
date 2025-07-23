#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{   
    // Function objects {also known as a functor}: Function wrapped in a class so that it is available like an object;
    // Thiis basically helps to treat a function as an object
    int arr[] = {1,2,67,45,8,9,0};

    sort(arr, arr + 7);
    // sort(name of the array, name of the array plus length of the array)

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    sort(arr, arr + 7, greater<int>() );


    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}