#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter r: ";
    cin>>r;
    for( int i = r; i >= 1; i-- ){
        for( int j = i; j >= 1; j-- ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}