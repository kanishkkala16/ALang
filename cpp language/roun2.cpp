#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int len;
    cin>>len;
    
    int num[len];
    // char num[len];
    
    for(int i = 0; i<len; i++)
    {
        cin>>num[i];
      
    }
    
    for(int j = 0;j<len;j++)
    {
        int value = num[j] +49;
        cout<<value<<endl;
        cout<<(char)value<<endl;
        // cout<<x[len];

    }
    
    return 0;
}