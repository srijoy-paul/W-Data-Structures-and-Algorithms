#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, accountNumber;

public:
    Customer(string name, int balance, int accountNumber)
    {
        this->name = name;
        this->balance = balance;
        this->accountNumber = accountNumber;
    }

    // deposit
    void deposit(int amt)
    {
        if (amt > 0)
        {
            balance += amt;
            cout << amt << " is credited successfully." << endl;
        }
        else
        {
            throw runtime_error("Amount should be greater than 0");
        }
    }

    void withdraw(int amt)
    {
        if (amt > 0 && amt <= balance)
        {
            balance -= amt;
            cout << amt << " is debited successfully." << endl;
        }
        else
            throw runtime_error("Your balance is low");
    }

    // withdraw
};

int main()
{
    Customer Mohit("Mohit", 1000, 1234);
    try
    {
        Mohit.deposit(500);
        Mohit.withdraw(2000);
    }
    catch (const runtime_error msg)
    {
        cout << "Exception Occured: " << msg << endl;
    }
}