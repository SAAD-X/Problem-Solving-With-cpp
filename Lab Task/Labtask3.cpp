/*Write an account class with data members number, name, and type of account. A customer can
 deposit and withdraw amount in his account. The program will show the balance before and after withdraw/deposit.*/

#include<iostream>
using namespace std;

class Bank
{

public :
    float balance = 0;
    float wdraw = 0 ;
    Bank ()
    {
        float amount=0.0;
    }
    void deposit (float amount)
    {
        cout<<"You are depositing Money $: "<<endl;
        cin>>balance;

    }
    void withdraw (float amount)
    {
        cout<<"You are Withdrawing Money $: "<<endl;
        cin>>wdraw;

        if(balance >wdraw)
        {
            cout<<"Transaction is successful, sir! "<<endl;
        }
        else
        {
            cout<<"Sorry sir!!"<<endl;
            cout<<"You Don't have sufficient balance"<<endl;
        }
    }
    void CurrentAmount(int amount)
    {

        if(balance - wdraw>0)
        {

             cout<<"Your Current Amount is $: "<<balance - wdraw;

        }
        else
        {
            cout<<"Please try again, Thank You."<<endl;
        }
    }
};

int main()
{
int amount;
Bank account1;
account1 . deposit(amount);
account1 . withdraw(amount);
account1 . CurrentAmount (amount);

cout<<endl;
return 0;
}
