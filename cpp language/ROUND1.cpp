#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char x[100],y[100];
    cin>>x>>y;
    if(strlen.(y) > strlen.(x))
    {
        for (int i = 0; i<strlen(x); i++)
        {
            if(x[i] == y[i])
            {
                cout<<x[i];
            }
            else
            {
                cout<<-1;
            }
        }
    }
    else
    {
        for (int i = 0; i<strlen(y); i++)
        {
            if(x[i] == y[i])
            {
                cout<<y[i];
            }
            else
            {
                cout<<-1;
            }
        }
    }
    
    return 0;
}