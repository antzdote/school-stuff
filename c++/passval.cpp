#include <iostream>
using namespace std;

void withdraw(double&, double);

int main()
{
    double harrys_account = 1000;
    double sallys_account = 500;
    withdraw(harrys_account, 100);//harrys account now has 900
    withdraw(harrys_account,1000);// insufficient funds
    withdraw(sallys_account,150);
    cout<<"Harry's account: "<<harrys_account<<endl;
    cout<<"Sally's account: "<<sallys_account<<endl;

    return 0;
}

void withdraw(double& balance, double amount)
{
    const double PENALTY = 10;
    if (balance>=amount)
        balance -=amount;
        else
            balance -= PENALTY;
}
