#include<iostream>
using namespace std;
void isEven( int n )
{
    if( n % 2 == 0 )
    cout<<"Even.\n";
    else
    {
        cout<<"Odd.\n";
    }
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    isEven(n);
    return 0;
}