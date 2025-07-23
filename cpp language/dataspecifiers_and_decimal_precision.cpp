# include<iostream>
# include<iomanip>

using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    cin>>a;    
    cin>>b;    
    cin>>c;    
    cin>>d;    
    cin>>e;
    //scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    
    cout<<a<<endl;

    cout<<b<<endl;

    cout<<c<<endl;

    cout<<std::fixed;
    cout<<std::setprecision(3);
    cout<<d<<endl;
    
    cout<<std::fixed;
    cout<<std::setprecision(9);
    cout<<e<<endl;

    return 0;
}
    
    