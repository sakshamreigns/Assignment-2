#include<iostream>
using namespace std;

int main()

{
    int year;

    cout<<"Please enter a year"<<endl;
    cin>>year;

    if(year%4==0)

    cout<<"Entered year is leap year.";

    else
    cout<<"Entered year is not a leap year."<<endl;

    return 0;
}