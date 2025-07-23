#include<iostream>
#include<list>

using namespace std;

void Display(list<int> &soochi)
{
    list<int> :: iterator iter;
    //this wiill make a refernece to the first element of the list;
    for (iter = soochi.begin(); iter != soochi.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}
int main()
{   
    list<int> l1;// will make a list of 0 length    
    l1.push_back(555);
    l1.push_back(75);
    l1.push_back(96);
    l1.push_back(1111);

    Display(l1);
    l1.sort();
    Display(l1);

    //ways to remove elements from a list
    // l1.pop_back();
    // l1.pop_front();
    // l1.remove(9);
    
    list<int> l2(3);// will make an empty list of 7 length
    list<int> :: iterator iter1;
    iter1 = l2.begin();

    *iter1 = 45;
    iter1++;
    *iter1 = 23;
    iter1++;
    *iter1 = 9;
    iter1++;

    Display(l2);
    l1.sort();
    l2.sort();
    l1.merge(l2);
    cout<<"Sorting and Merging  the two lists"<<endl;
    Display(l1);

    l1.reverse();
    Display(l1);
    
    return 0;
}