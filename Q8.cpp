#include<iostream>
using namespace std;

int main()

{
    int length, breadth, Perimeter, Area;
    cout<<"Please enter the length of the rectangle."<<endl;
    cin>>length;
    cout<<"Please enter the breadth of the rectangle."<<endl;
    cin>>breadth;

    Area= length*breadth;
    Perimeter = 2*(length+breadth);

    if(Perimeter==Area)

    cout<<"The area of the rectangle is equal to the perimeter."<<endl;

    else

    cout<<"The area of the rectangle is not equal to the perimeter."<<endl;

    return 0;

}