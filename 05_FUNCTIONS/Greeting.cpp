#include<iostream>
using namespace std;
void greet()
{
    cout<<"Beast Vinit.\n";
    cout<<"Learning c++ on my beast flow.\n";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for( int i = 1; i <= n; i++ )
    {
    greet();
    cout<<endl;
    }
    return 0;
}