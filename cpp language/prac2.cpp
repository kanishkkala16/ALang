# include<iostream>

using namespace std;

int main()
{   
    int num1, num2;

    cin>>num1;
    cin>>num2;

    for(num1; num1<=num2; num1++)
    {
        
        
        switch (num1)
        {
        case 1:
            cout<<"one"<<endl;
            break;
        case 2:
            cout<<"two"<<endl;
            break;
        case 3:
            cout<<"three"<<endl;
            break;
        case 4:
            cout<<"four"<<endl;
            break;
        case 5:
            cout<<"five"<<endl;
            break;
        case 6:
            cout<<"six"<<endl;
            break;
        case 7:
            cout<<"seven"<<endl;
            break;
        case 8:
            cout<<"eight"<<endl;
            break;
        case 9:
            cout<<"nine"<<endl;
            break;
        
        default:
        if(num1>9){
                if(num1%2==0){
                    cout<<"even"<<endl;
                }
            }
        if(num1>9){
                if(num1%2==1){
                    cout<<"odd"<<endl;
                }
            }
        
            break;
        }

        
        
    }
    

    return 0;
}