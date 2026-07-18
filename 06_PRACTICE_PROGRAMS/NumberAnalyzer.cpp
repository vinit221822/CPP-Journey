#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"Enter your number: ";
    cin>>num;
    for( int i = 1; i <= num; i++ ){
        sum += i;
    }
     cout<<sum<<endl;
     int store;
     cout<<"Nou enter a number to reverse it: ";
     cin>>num;
     for( ;num != 0; ){
        store = num % 10;
        num /= 10;
        cout<<store;
     }
    int count = 0;
    cout<<"Enter the number to count its digits: ";
    cin>>num;
    for( ;num != 0; ){
        num /= 10;
        count++;
    }
      cout<<count;
    return 0;
}