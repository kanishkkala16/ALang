# include<iostream>
# include<string>

using namespace std;

int main()
{
    string x, y;
    cin>>x>>y;

    int len1 = x.size();
    int len2 = y.size();
    cout<<len1<<" "<<len2<<endl;

    string z = x+y;
    cout<<z<<endl;

    string temp;
    temp[0] = x[0];
    x[0] = y[0];
    y[0] = temp[0];

    cout<<x<<" "<<y;


    return 0;
}