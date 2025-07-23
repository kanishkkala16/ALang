# include<iostream>

using namespace std;

int main()
{   

    int n;
    cout<<"Which number's multipliation do you want to see"<<endl;
    cin>>n;

    for(int i = 0; i<10; i++){
        cout<<n<<" X "<<(i+1)<<" = "<<n*(i+1)<<endl;
    }
    return 0;
}