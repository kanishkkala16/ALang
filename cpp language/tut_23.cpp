# include<iostream>

using namespace std;

class Shop{
    int n;
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
    void counter_val(void);
    void getvalue(void);
    void putvalue(void);
};

void Shop :: counter_val(void)
{
    counter = 0;
}
void Shop :: getvalue(void)
{   
    cout<<"Enter the number of items you wanna feed today!"<<endl;
    cin>>n;

    for (int j = 0; j < n; j++)
    {   
        int x;
        cout<<"Enter the value of item id "<<counter+1<<endl;
        cin>>itemid[counter];
        cout<<"Enter the value of item price"<<endl;
        cin>>itemprice[counter];   
        x = counter++;
    }
    
}

void Shop :: putvalue(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}


int main()
{
    Shop agarwalsweet;
    agarwalsweet.counter_val();
    agarwalsweet.getvalue();
    agarwalsweet.putvalue();
    return 0;
}