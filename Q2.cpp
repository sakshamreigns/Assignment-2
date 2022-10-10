#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Please enter a number"<<endl;
    cin>>n;

    if(n%2==0)
    cout<<"The number entered is even.";
    else
    cout<<"The number entered is odd.";

    return 0;
}