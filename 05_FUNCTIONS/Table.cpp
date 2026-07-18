#include<iostream>
using namespace std;
void table()
{
      int n;
    cout<<"Enter n: ";
    cin>>n;
    for( int i = 1; i <= 10; i++ )
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}
int main()
{
  table();
  return 0;
}