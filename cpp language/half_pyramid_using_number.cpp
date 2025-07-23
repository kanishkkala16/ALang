#include<iostream>

using namespace std;

int main()
    
{   
    int n;
     
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" "; // THE SPACE HERE IS JUST FOR THE NEATNESS AND FOR NO ANY OTHER REASON SO.........
        }
        cout<<endl;
        
    }
    
    return 0;
}