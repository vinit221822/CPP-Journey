#include<iostream>
using namespace std;
int main(){
    int n;
    char alp;
    cout<<"Enter n: ";
    cin>>n;
    for( int i = 1; i <= n; i++ ){
        for( int j = 1; j <= i; j++ ){
            alp = 64+j;
            cout<<alp<<" ";
        }
        cout<<"\n";
    }
    return 0;
}