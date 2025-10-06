/*
Problem: Design a class `BankAccount` that encapsulates:

- Private attributes: `accountNumber`, `balance`, `ownerName`
- Public methods: `deposit()`, `withdraw()`, `getBalance()`
- Apply **input validation** and **data hiding** principles

Concepts Tested: Encapsulation, data validation, constructor initialization
*/
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int account_number;
    int balance;
    string owner_name;
public: 
    BankAccount(int account_number, int balance, string owner_name){
        this->account_number = account_number;
        this->balance = balance;
        this->owner_name = owner_name;
    }
    void deposit(int amount){
        balance += amount;
    }
    void withdraw(int amount){
        balance -= amount;
    }
    void get_balance(int account_number){
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
        cout << "Owner Name: " << owner_name << endl;
    }
};

int main(){
    BankAccount acc(12345, 1000, "Angad");
    acc.deposit(200);
    acc.withdraw(50);
    acc.get_balance(12345);
    return 0;
}