#include<iostream>
using namespace std;
int main(){
    int n,s;
    cout<<"Enter n: ";
    cin>>n;
    for( int i = 1; i <= n; i++ ){
        s = i*i;
        cout<<i<<"'s square = "<<s<<endl;
    }
    return 0;
}