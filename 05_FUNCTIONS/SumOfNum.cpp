#include<iostream>
using namespace std;
int add( int a, int b ) 
{
    return a + b;
}
int main()
{
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<add( a, b );
    return 0;
}