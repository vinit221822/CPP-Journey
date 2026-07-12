#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter r: ";
    cin>>r;
    for( int i = r; i >= 1; i-- ){
        for( int j = r; j >= i; j-- ){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}