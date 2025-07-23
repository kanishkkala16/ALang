# include<iostream>

using namespace std;

int main()
{
    int marks[] = {34,335,99,69};

    int *ptr = marks;
    for (int i = 0; i < 4; i++)
    {
        /* code */
    cout<<"The value of marks is : "<<(*ptr + (i * sizeof(int) ) )<<endl;

    }
    

    return 0;
}