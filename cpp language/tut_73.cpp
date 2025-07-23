#include<iostream>
#include<map>
#include<string>

using namespace std;

// Map is an associative array;
int main()
{   
    map<string ,int> marksMap;
    marksMap["Kanishk"] = 99;
    marksMap["Bablu"] = 2;
    marksMap["Ramu"] = 67;
    marksMap.insert( { {"Karan", 92} , {"Arjun" , 69} } );

    map<string , int> :: iterator iter;
    for (iter = marksMap.begin(); iter!=marksMap.end(); iter++)

    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"The size of the map is: "<<marksMap.size()<<endl;
    cout<<"The max size of the map is: "<<marksMap.max_size()<<endl;
    cout<<"The empty return value of the map is: "<<marksMap.empty()<<endl;

    

    return 0;
}