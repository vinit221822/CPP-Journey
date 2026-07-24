#include<iostream>
using namespace std;
int atm()
{
    int pin,balance = 50000,deposit,withdraw;
    char choice;
    cout<<"Enter PIN: ";
    cin>>pin;
    if( pin == 111 )
    {
    cout<<"! Login successful !"<<endl;
    }
    else 
    {
        cout<<"Wrong pin\n";
        return 0;
    }
    while( true ) 
    {
    cout<<"===== ATM MENU ====="<<endl;
    cout<<"1. Deposit money"<<endl;
    cout<<"2. Withdraw money"<<endl;
    cout<<"3. Check balance"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch( choice )
    {
    case '1':
    cout<<"Enter money to deposit: ";
    cin>>deposit;
    balance += deposit;
    cout<<"Total balance = "<<balance<<endl;
    break;
    case '2':
    cout<<"Enter money to withdraw: ";
    cin>>withdraw;
    if( withdraw > balance )
    {
        cout<<"Low balance ";
    }
    else
    {
    balance -= withdraw;
    cout<<"Remain balance = "<<balance<<endl;
    }
    break;
    case '3':
    cout<<"Total balance is - "<<balance<<endl;
    break;
    case '4':
    cout<<"Thankyou for using the ATM";
    break;
    default:
    cout<<"Invalid choice."<<endl;
    return 0;
}
    if( choice == '4' )
    {
        break;
    }
}
return 0;
}
int main()
{
    atm();
    return 0;
}