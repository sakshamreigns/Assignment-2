#include<iostream>
using namespace std;

int main()

{
    int n, reverse=0, rem;

    cout<<"Enter a five digit number."<<endl;
    cin>>n;

    if (n==reverse);


    while(n!=0)
    {
        rem= n%10;
        reverse= reverse*10+ rem;
        n= n/10;

        
    
    }
    cout<<"Reversed number is-: "<<reverse<<endl;

    

    return 0;
}