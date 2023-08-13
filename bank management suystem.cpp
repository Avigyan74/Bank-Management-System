/*c++ program of a bank management system*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Bank
{
char name[100], address[100],y; int money;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};
void Bank:: open_account()
{
    cout<<"enter your name : ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address : ";
    cin.ignore();
    cin.getline(address,100);
    cout<<"do you want to open a savings account(s) or current account(c) ";
    cin>>y;
    cout<<"enter the amount you want to deposit\n";
    cin>>money;
    cout<<"Account created successfully ";
}
void Bank::deposit_money()
{
    int a;
    cout<<"enter the amount to be deposited ";
    cin>>a;
    money=money+a;
    cout<<"total amount in account : "<<money;
}
void Bank::display_account()
{
    cout<<" Full name : "<<name;
    cout<<" Address : "<<address;
    cout<<"type of account you want to open : "<<y;
    cout<<"amount you deposited : "<<money;
}
void Bank::withdraw_money()
{   float b;
    cout<<" enter amount to withdraw ";
    cin>>b;
    money=money-b;
    cout<<"amount left in account "<<money;
}

int main()
{   int ch,x;
    Bank obj;
    do
    {cout<<"1. Open account \n";
    cout<<"2. Deposit money \n";
    cout<<"3. Withdraw money \n";
    cout<<"4. Display account \n";
    cout<<"5. Exit\n";
    cout<<"select from the options above ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<< "1. Open account ";
        obj.open_account();
        break;

        case 2:
            cout<< "2. Deposit money ";
        obj.deposit_money();
        break;

        case 3:
            cout<< "3. Withdraw money ";
        obj.withdraw_money();
        break;

        case 4:
            cout<< "4. Display account ";
        obj.display_account();
        break;

        case 5:
            if(ch==5)
            {
                exit(1);
            }
        default:
            cout<<"Sorry! try again ";
    }
            cout<<"\ndo you want to select next option then press y\n";
            cout<<"if you want to exit press n\n";
            x=getch();
            if(x=='n')
                exit(0);
    }
    while(x=='y');

    getch();
    return 0;

}
