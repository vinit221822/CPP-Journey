#include<iostream>
using namespace std;
void change( int x )
{
    x = 100;
    cout<<x<<endl;
    return;
}
int main()
{
    int x = 10;
    change( x );
    cout<<x<<endl;
    return 0;
}