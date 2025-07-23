#include<iostream>

using namespace std;

template<class x = int, class y = char>
class myClass
{
    public:
    x data1;
    y data2;

    void setData(x raju, y kaju)
    {
        data1 = raju;
        data2 = kaju;
    }
    void display(void)
    {
        cout<<this->data1<<"\t"<<this->data2<<endl;
        
    }
};
int main()
{   
    myClass <> ram;
    ram.setData(45, 'a');
    ram.display();

    myClass <char, char> shaam;
    shaam.setData('f', 'u');
    shaam.display();
    
    return 0;
}