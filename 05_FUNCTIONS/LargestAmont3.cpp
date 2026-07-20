#include<iostream>
using namespace std;
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