#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for( int i = 1; i <= n; i++ ){
        for( int j = 1; j <= i; j++ ){
            char ch = char( 64+i );
            if( i % 2 == 0 ){
                cout<<i<<" ";
            }
            else{
               cout<<ch<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}