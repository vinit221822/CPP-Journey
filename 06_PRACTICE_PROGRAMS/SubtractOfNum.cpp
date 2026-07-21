#include<iostream>
using namespace std;
int subtract(int n1, int n2 )
{
    return n1-n2;
}
 int main()
 {
    int n1,n2;
    cout<<"Ente the first number: ";
    cin>>n1;
    cout<<"Ente the first number: ";
    cin>>n2;
    cout<< subtract(n1,n2);
    return 0;
 }