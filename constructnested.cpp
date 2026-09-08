#include<iostream>
using namespace std;
class SavingAccount 
{
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;
    public:
    SavingAccount(string name, int number, double bal, double rate)
    {
        accountHolderName = name;
        accountNumber = number;
        balance = bal;
        interestRate = rate;
    }
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout<<"Deposited: "<<amount<<endl;
        }
    }
    void Withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
        else
    {
        cout<<"Insufficient balance!"<<endl;
    }
    }
    void applyInterest()
    {
        double interest = balance*interestRate/100;
        balance += interest;
        cout<<"Interest applied: "<<interest<<endl;
    }
    void display()
    {
        cout<<"\n [saving Account]"<<endl;
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;  
        cout<<"Balance: "<<balance<<endl;
        cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
    }
};
class CheckingAccount 
{
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;
    public:
    CheckingAccount(string name, int number, double bal, double fee)
    {
        accountHolderName = name;
        accountNumber = number;
        balance = bal;
        transactionFee = fee;
    }
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout<<"Deposited: "<<amount<<endl;
        }
    }
    void Withdraw(double amount)
    {
        double totalAmount = amount + transactionFee;
        if(totalAmount <= balance)
        {
            balance -= totalAmount;
            cout<<"Withdrawn: "<<amount<<"("<<transactionFee<<"Fee applied)"<<endl;
        }
        else
        {
            cout<<"Insufficient balance for withdrawal + fee!"<<endl;
        }
    }
    void display()
    {
        cout<<"\n [Checking Account]"<<endl;
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;  
        cout<<"Balance: "<<balance<<endl;
        cout<<"Transaction Fee: "<<transactionFee<<endl;
    }
};
int  main()
{
    SavingAccount savingAcc("shubham", 1001, 5000.0, 3.0);
    CheckingAccount checkingAcc("yash", 1002, 3000.0, 20.0);

    savingAcc.display();
    savingAcc.deposit(1000);
    savingAcc.Withdraw(2000);
    savingAcc.applyInterest();
    savingAcc.display();

    checkingAcc.display();
    checkingAcc.deposit(1500);
    checkingAcc.Withdraw(1000);
    checkingAcc.display();

    return 0;
}