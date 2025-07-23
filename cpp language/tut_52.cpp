#include<iostream>

using namespace std;

class Shop
{
    int id;
    float price;

    public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void Display(void)
    {
        cout<<"The id of this item is "<<id<<endl;
        cout<<"The price of this item is "<<price<<endl;
    }
};
int main()
{
    // int size = 2;
    int size;
    float price;
    int id;

    cout<<"Enter the number of items you would like to enter "<<endl;
    cin>>size;    

    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
   for (int i = 0; i < size; i++)
   {
       cout<<"Enter Id and price of item "<<i+1<<endl;
       cin>>id>>price;

       ptr->setData(id,price);
    //    (*ptr).setData(id,price);
        ptr++;
   }

   for (int k = 0; k < size; k++)
   {
       cout<<"Item number: "<<k+1<<endl;
       ptrtemp->Display();
       ptrtemp++;
   }
   
   
    return 0;
}