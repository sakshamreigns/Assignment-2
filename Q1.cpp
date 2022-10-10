#include<iostream>
using namespace std;

int main()
{
    float Selling_Price, Cost_Price, Profit, Loss;

    cout<<"Please enter the cost price of the item."<<endl;
    cin>>Cost_Price;

    cout<<"Please enter the selling price of the item."<<endl;
    cin>>Selling_Price;
    

    if(Selling_Price>Cost_Price)
    {
        cout<<"Seller has made the profit."<<endl;
        Profit=Selling_Price-Cost_Price;
        cout<<"Profit made by the seller is-:"<<Profit<<endl;
    }

    else
    {
        cout<<"Seller has made the loss."<<endl;
        Loss=Cost_Price-Selling_Price;
        cout<<"Loss made by the seller is-:"<<Loss<<endl;

    }
}
    