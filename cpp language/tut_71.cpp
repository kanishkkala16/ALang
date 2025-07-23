#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{   
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<"Yo"<<endl;
}
int main()
{
    // vector<int> ram;
    // int size;
    // int element;
    // cout<<"Enter the size of the vector :";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this enter: "<<endl;
    //     cin>>element;
    //     ram.push_back(element);
    // }
    // // ram.pop_back();
    // display(ram);

    // vector<int> :: iterator iter1 = ram.begin();
    // ram.insert(iter1, 10);
    // display(ram);
    
    // vector<int> :: iterator iter2 = ram.begin();
    // ram.insert(iter2+4, 4, 10);
    // display(ram);



    //way to create a vector;

    // vector<int> v1;
    // display (v1);

    // vector<char> v2(4);
    // v2.push_back('t');
    // display (v2);

    // vector<char> v3(v2);
    // display (v3);

    vector<int> v4(6,69);
    display (v4);
    cout<<v4.size();
    return 0;
}