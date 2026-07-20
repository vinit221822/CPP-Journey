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
void isEven( int n )
{
    if( n % 2 == 0 )
    cout<<"Even.\n";
    else
    {
        cout<<"Odd.\n";
    }
}
void isGreatest()
{
     int num1,num2;
    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    if( num1 == num2 )
    {
        cout<<"Both numbers are equal."<<endl;
    }
    else if( num1 > num2 )
{
    cout<<num1<<" is greatest.";
}
    else {
        cout<<num2<<" is greatest.";
    }
}
int main()
{
    isGreatest();
    return 0;
}