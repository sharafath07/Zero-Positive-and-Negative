#include <iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter a Number : ";
    cin>>num;
    
    if(num>0)
        cout<<num<<" is a positive number.";
    else if(num<0)
        cout<<num<<" is a negative number.";
    else
        cout<<num<<" is Zero.";

    return 0;
}