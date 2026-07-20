#include<iostream>
using namespace std;
void isPositive( int n )
{
    if( n > 0 )
    {
    cout<<"Positive.";
    }
    else 
    {
        cout<<"Negative.";
    }
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    isPositive( n );
    return 0;
}