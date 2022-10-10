#include<iostream>
using namespace std;

int main()

{
    int first_angle, second_angle, third_angle;

    cout<<"Please enter the first angle of the triangle."<<endl;
    cin>>first_angle;
    cout<<"Please enter the second angle of the triangle."<<endl;
    cin>>second_angle;
    cout<<"Please enter the third angle of the triangle."<<endl;
    cin>>third_angle;

    if (first_angle + second_angle + third_angle == 180)

    cout<<"Triangle is valid."<<endl;

    else

    cout<<"Triangle is not valid."<<endl;

    return 0;
}