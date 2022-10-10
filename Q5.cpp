#include<iostream>
using namespace std;

int main()

{
    int Ram, Shyam, Ajay;

    cout<<"Enter the age of Ram"<<endl;
    cin>>Ram;
    cout<<"Enter the age of Shyam"<<endl;
    cin>>Shyam;
    cout<<"Enter the age of Ajay"<<endl;
    cin>>Ajay;

    if (Ram<Shyam && Ram<Ajay)
    cout<<"Ram is the yougest of the three."<<endl;
    else if(Shyam<Ram && Shyam<Ajay)
    cout<<"Shyam is the yongest of all the three."<<endl;
    else
    cout<<"Ajay is the youngest of al the three."<<endl;

    return 0;
}